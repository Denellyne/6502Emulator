#pragma once
#include "Memory/Memory.h"

class Cpu {
public:
  Cpu();
  ~Cpu();

private:
  void execute();
  void reset() noexcept;

  byte fetch();

  Memory mem;

  word pc;
  byte x, y, a, sp;

  bool S, V, B, D, I, Z, C;
};
