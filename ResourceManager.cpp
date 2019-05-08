#include "Digraph.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;


int main()
{
  Digraph graph;
  graph.print();

  string str = "bullets";
  graph.deleteNode(str);

  return 0;
}
