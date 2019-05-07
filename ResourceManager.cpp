#include "Digraph.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
  Digraph graph;


  for (auto it: graph.map)
    cout << it.first << endl;

  return 0;
}
