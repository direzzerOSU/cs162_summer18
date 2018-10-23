# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

a1: a2_impl.o a2_header.o
	$(CXX) $(CXXFLAGS) -o a1 a2_impl.o a2_header.o

# The a1.o target can be written more simply

a1.o: a2_impl.cpp a2_header.hpp
	$(CXX) $(CXXFLAGS) -c a2_impl.cpp

a2_header.o: a2_header.hpp
