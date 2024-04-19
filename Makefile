# Variables
CXX = g++
CXXFLAGS = -I ./src/core
SRC = $(wildcard src/*.cpp src/*/*.cpp)
OBJ = $(SRC:.cpp=.o)
EXEC = game

# Default target
all: $(EXEC)

# Linking
$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC)


# Compilation
.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@


# Clean
clean:
	rm -f $(OBJ) $(EXEC)


# Phony targets
.PHONY: all clean