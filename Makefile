# Makefile for RTS Resource Manager

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

resource_manger: ResourceManager.o Node.o
	$(CXX) $(CXXFLAGS) -o resource_manger ResourceManager.o Node.o

ResourceManager.o: ResourceManager.cpp
	$(CXX) $(CXXFLAGS) -c ResourceManager.cpp

Node.o: Node.cpp
	$(CXX) $(CXXFLAGS) -c Node.cpp
