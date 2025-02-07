#pragma once
#include "../../types.h"
#include <cstdio>

struct Memory {
public:
  Memory();
  ~Memory();

  void reset() noexcept;
  byte fetch(word &pc);

  void pushStack(byte &sp, const byte data);
  byte popStack(byte &sp);

private:
#define RAMSIZE 65536
  byte ram[RAMSIZE];
};
