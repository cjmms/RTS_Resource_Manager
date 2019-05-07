#include <string>
#include "Node.h"
#include <unordered_map>

using namespace std;

// Build a directed graph(Digraph) for resource manager
// Digraph is implemented by adjacency list
// This project uses unordered_map to implement adjacency list
//  key is the name of resource and value is a node which contains edges

class Digraph
{
private:

  // constructor will read the file automatically
  unordered_map<string, Node> map;

  // insert a line of resources into the map
  // for example: "handgun bullets"
  void insert_pair(string& line);

public:
  Digraph();
  void deleteNode(string& name);
  void print();
};
