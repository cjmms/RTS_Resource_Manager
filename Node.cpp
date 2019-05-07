
#include "Node.h"

Node::Node()
{
  edges = vector<string>();
}

Node::~Node()
{
  edges.clear();
}
