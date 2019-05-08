#include "Digraph.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
  Digraph graph;
  string input;

  while(1)
  {
    cout << "Please type q to quit, type name of the node to delete node:" << endl;
    getline(cin, input);
    if (input == "q") break;
    else graph.deleteNode(input);
  }
  
  return 0;
}
