#include <iostream>
#include "Node.h"

Node::Node()
{
  edges = vector<string>();
}


void Node::addEdge(string& name)
{
  edges.push_back(name);
}


void Node::print_edges()
{
  cout << "Edges: ";
  for (auto const& edge: edges)
    cout << edge << " ";
  cout << "\n" << endl;
}


// iterate edges and check if every edge still exist in the map
void Node::print_usability(unordered_map<string, Node>& map)
{
  bool usable = true;
  for (auto const& edge: edges)
    if (map.find(edge) == map.end()) usable = false;

  cout << "Usability: " << BoolToString(usable) << endl;
}


inline const char * const Node::BoolToString(bool b)
{
  return b ? "true" : "false";
}
