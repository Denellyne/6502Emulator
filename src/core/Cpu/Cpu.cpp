#include "Cpu.h"
#include <cstdio>

Cpu::Cpu() {
  printf("Initializing 6502 Cpu emulator\n");
  reset();

  printf("Starting execution\n");
  execute();
}
Cpu::~Cpu() { printf("Quitting...\n"); }
void Cpu::reset() noexcept { mem.reset(); }

void Cpu::execute() {}

byte Cpu::fetch() { return mem.fetch(); }
