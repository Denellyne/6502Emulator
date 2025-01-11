CFLAGS =
INCLUDES = core/Cpu/Cpu.cpp core/types.h core/Cpu/Memory/Memory.cpp 
DEBUG = core/Debug/Utester/unitTester.hpp -g -Wall -Wextra -Wpedantic

% : %.cpp
	g++ $(CFLAGS) $(INCLUDES) -o $@ $<

run:
	@echo "Compiling..."
	g++ $(CFLAGS) $(INCLUDES) -o main main.cpp
	@cls
	@./main.exe

debug:
	@echo "Compiling..."
	g++ $(DEBUG) $(CFLAGS) $(INCLUDES) -o main main.cpp

clean:
	@echo "Deleting..."
	@rm main
