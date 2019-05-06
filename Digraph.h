#include <string>
#include "Node.h"
#include <unordered_map>

using namespace std;

class Digraph
{

public:
  unordered_map<string, Node> map;
  Digraph();
  void deleteNode(string name);
  void print();
};
