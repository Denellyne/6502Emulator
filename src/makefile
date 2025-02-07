CXX = g++
CFLAGS = -fimplicit-constexpr 
INCLUDES := $(shell find . -name '*.cpp')
OBJ := $(patsubst %.cpp,%.o,$(INCLUDES))
DEBUG = -g -Wall -Wextra -pedantic
OUT = ../bin/main

%.o: %.cpp 
	$(CXX) $(CFLAGS) -c $< -o $@  	
	@echo "Compiled:" $@

run: $(OBJ)
	@echo "Compiling..."
	$(CXX) $(CFLAGS) $(OBJ) -o $(OUT) 
	@$(OUT)

debug: 
	@echo "Compiling..."
	$(CXX) $(DEBUG) $(CFLAGS) $(INCLUDES) -o $(OUT)d

clean:
	@echo "Deleting..."
	@rm $(OBJ)
	@rm $(OUT)
	@rm $(OUT)d
