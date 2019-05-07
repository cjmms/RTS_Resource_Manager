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


void Digraph::deleteNode(string& name)
{

}


void Digraph::print()
{
  for (auto it: map)
  {
    cout << "Resource: " << it.first << endl;
    resource.second.print_edges();
  }
}

// put a line of resource("handgun bullets") into a stringsteam
// and read two resources seperately
// All the nodes are not allocated dynamically
void Digraph::insert_pair(string& line)
{
  stringstream stream;
  string first_resource, second_resource;

  stream.str(line);
  stream >> first_resource;

  // insert() will not replace the old value(if keys are same)
  map.insert(make_pair(first_resource, Node()));
  stream >> second_resource;
  map.insert(make_pair(second_resource, Node()));

  // add edge pointing from first_resource to second_resource
  map.at(first_resource).addEdge(second_resource);
}
