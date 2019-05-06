
#include "Node.h"

Node::Node()
{
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
