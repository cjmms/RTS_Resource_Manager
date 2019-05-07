#include <string>
#include "Node.h"
#include <unordered_map>

using namespace std;

class Digraph
{
private:
  void insert_pair(string& line);

public:
  unordered_map<string, Node> map;
  Digraph();
  void deleteNode(string name);
  void print();
};
