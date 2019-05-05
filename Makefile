# Makefile for RTS Resource Manager

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

resource_manger: ResourceManager.o
	$(CXX) $(CXXFLAGS) -o resource_manger ResourceManager.o

ResourceManager.o: ResourceManager.cpp
	$(CXX) $(CXXFLAGS) -c ResourceManager.cpp
