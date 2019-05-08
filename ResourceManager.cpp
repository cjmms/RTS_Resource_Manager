#include "Digraph.h"
#include <iostream>
#include <string>
using namespace std;

void start() {
  Digraph graph;
  string input;

  graph.print();

  string str = "bullets";
  graph.deleteNode(str);

  while(1)
  {
    cout << "Please type q to quit:" << endl;
    getline(cin, input);
    if (input == "q") break;
  }

}


int main()
{
  start();
  return 0;
}
