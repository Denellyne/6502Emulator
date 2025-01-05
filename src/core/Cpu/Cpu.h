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
};
