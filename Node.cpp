#include <iostream>
#include "Node.h"

Node::Node()
{
  edges = vector<string>();
}

Node::~Node()
{
  edges.clear();
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
