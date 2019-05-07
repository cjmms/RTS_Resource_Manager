#include "Digraph.h"
#include <sstream>
#include <fstream>
#include <iostream>

using namespace std;

Digraph::Digraph()
{
  string line;
  ifstream file ("resource.txt");

  if (file.is_open())
  {
    while (getline(file, line))
      insert_pair(line);

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

void Digraph::insert_pair(string& line)
{
  stringstream stream;
  string word;

  stream.str(line);
  stream >> word;
  // insert() will not replace the old value(if keys are same)
  map.insert(make_pair(word, Node()));
  stream >> word;
  map.insert(make_pair(word, Node()));
}
