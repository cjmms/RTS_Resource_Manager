#include "Digraph.h"
#include <sstream>
#include <fstream>
#include <iostream>

Digraph::Digraph()
{
  string line;
  stringstream stream;
  string word;
  ifstream file ("resource.txt");

  if (file.is_open())
  {
    while (getline(file, line))
    {
      stream.clear();
      stream.str(line);
      stream >> word;
      map[word] = Node();
      stream >> word;
      map[word] = Node();
    }
    file.close();
  }
  else cout << "Unable to open file.\n";
}

void Digraph::deleteNode(string name)
{

}

void Digraph::print()
{

}
