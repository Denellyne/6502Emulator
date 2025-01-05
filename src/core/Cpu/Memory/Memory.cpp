#include "Memory.h"

Memory::Memory() { reset(); }

Memory::~Memory() {}

void Memory::reset() noexcept {
  sp = 0xFF;
  pc = (ram[0xFFFD] << 8) | ram[0xFFFC];
}

void Memory::pushStack(const byte data) {
  ram[0x01 | sp] = data;
  sp--;
}

byte Memory::popStack() {
  sp++;
  return ram[0x01 | sp];
}

void Memory::callSubroutine(const word address) {
  pushStack(pc >> 8);
  pushStack(pc & 0x00FF);

  pc = address;
}

void Memory::returnSubroutine() { pc = (popStack() << 8) | popStack(); }

void Memory::loadRegister(const reg regA, const byte data) {
  switch (regA) {
  case XR:
    xr = data;
    break;
  case YR:
    yr = data;
    break;
  case A:
    a = data;
    break;
  }
}
void Memory::loadRegister(const reg regA, const word address) {}
void Memory::loadRegister(const reg regA, const reg regB) {}

void Memory::saveRegister(const reg regA, const word address) {}

byte Memory::fetch() { return ram[pc++]; }
