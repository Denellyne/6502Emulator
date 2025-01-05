#pragma once
#include "../../types.h"
#include <cstdio>

/*
Status Register (p)
(bit 7 to bit 0)
N - Negative
V - Overflow
- - Ignored
B - Break
D - Decimal
I - Interrupt
Z - Zero
C - Carry
 */
#define XR 0
#define YR 1
#define A 2

struct Memory {
public:
  Memory();
  ~Memory();

  void callSubroutine(const word address);
  void returnSubroutine();

  void pushStack(const byte data);
  byte popStack();

  void writeRam(const byte data, const short idx);
  byte readRam(const short idx);

  void loadRegister(const reg regA, const byte data);
  void loadRegister(const reg regA, const word address);
  void loadRegister(const reg regA, const reg regB);

  void saveRegister(const reg regA, const word address);

  void reset() noexcept;

  byte fetch();

  void print() const {
    printf("Memory:\n");
    printf("PC:%i, SP:%i, X:%i,Y:%i, A:%i, P:%i\n ", pc, sp, xr, yr, a, p);
  }

private:
  byte ram[65536];
  word pc;
  byte xr, yr, a, p, sp;
};

struct debugMemory : private Memory {
  void print() const {}

  Memory const *operator->() const {
    print();
    return this;
  }
  Memory *operator->() {
    print();
    return this;
  }
};
