#include "Cpu.h"
#include "Memory/Memory.h"
#include "instructions.h"
#include <cstdio>

Cpu::Cpu() {
  printf("Initializing 6502 Cpu emulator\n");
  reset();

  printf("Starting execution\n");
  execute();
}
Cpu::~Cpu() { printf("Quitting...\n"); }
void Cpu::reset() noexcept {

  sp = 0x00;
  pc = 0xFFFC;
  x = y = a = 0;
  S = V = B = D = I = Z = C = false;
  mem.reset();
}

void Cpu::execute() {

  while (true) {
    switch (fetch()) {
    case LDA_Byte:
      a = fetch();
      break;
    default: // NOP
      break;
    }
  }
}
byte Cpu::fetch() {
  byte instruction = mem.fetch(pc);
  return instruction;
}
