#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

/*
 * Node(Vertex) class
 * Each node represent a resource
 * Name stores name of the object (e.g. Bullets)
 * Currently, node chooses vector as a container for edges
 * The values stored inside vector are keys for other nodes
 */

class Node
{
private:
  vector<string> edges;

public:
  Node();
  ~Node();
  void addEdge(string& name);
  void print_edges();
  void print_usability(unordered_map<string, Node>& map);
  const char * const BoolToString(bool b);
};
