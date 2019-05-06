# Makefile for RTS Resource Manager

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -g -std=c++17

# ****************************************************
# Targets needed to bring the executable up to date

resource_manger: ResourceManager.o Node.o Digraph.o
	$(CXX) $(CXXFLAGS) -o resource_manger ResourceManager.o Node.o Digraph.o

ResourceManager.o: ResourceManager.cpp
	$(CXX) $(CXXFLAGS) -c ResourceManager.cpp

Node.o: Node.cpp
	$(CXX) $(CXXFLAGS) -c Node.cpp

Digraph.o: Digraph.cpp
	$(CXX) $(CXXFLAGS) -c Digraph.cpp

.PHONY: clean
clean:
	rm -f *.o resource_manger
