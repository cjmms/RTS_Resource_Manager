
#include "Node.h"

Node::Node(string name, int key)
{
  this->name = name;
  this->key = key;
  edges = vector<int>();
}

Node::~Node()
{
  edges.clear();
}

string Node::getName()
{
  return name;
}

int Node::getKey()
{
  return key;
}
