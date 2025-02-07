#include "Memory.h"
#include <cstring>

Memory::Memory() { reset(); }

Memory::~Memory() {}

void Memory::reset() noexcept { memset(ram, 0, RAMSIZE); }

byte Memory::fetch(word &pc) { return ram[pc++]; }
void Memory::pushStack(byte &sp, const byte data) {}
byte Memory::popStack(byte &sp) { return 0; }
