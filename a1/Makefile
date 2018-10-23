# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

a1: a1_implementation.o a1_header.o
	$(CXX) $(CXXFLAGS) -o a1 a1_implementation.o a1_header.o

# The a1.o target can be written more simply

a1.o: a1_implementation.cpp a1_header.hpp
	$(CXX) $(CXXFLAGS) -c a1_implementation.cpp

a1_header.o: a1_header.hpp