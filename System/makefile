# Simple Makefile

# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Main target executable
TARGET = main

# Collect all .cpp files for main build, excluding test.cpp
SRCS = $(filter-out test.cpp, $(wildcard *.cpp))
OBJS = $(SRCS:.cpp=.o)
OBJS_NO_MAIN = $(filter-out main.o, $(OBJS)) # Exclude main.o for the test target

# Build main target
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile each .cpp file into a .o file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Target for running tests specifically from test.cpp
test: $(OBJS_NO_MAIN) test.o
	$(CXX) $(CXXFLAGS) $(OBJS_NO_MAIN) test.o -o test
	./test

# Clean up
clean:
	rm -f $(OBJS) $(TARGET) test test.o

# Mark clean and test as phony
.PHONY: clean test
