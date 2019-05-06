#include "Digraph.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
  Digraph graph;

  for (auto it: graph.map)
    cout << it.first << endl;

  //Node node("fewf", 12);
  /**
  string line;
  stringstream stream;
  string word;
  ifstream file ("resource.txt");

  if (file.is_open())
  {
    while (getline(file, line))
    {
      stream.clear();
      stream.str(line);
      stream >> word;
      cout << word << endl;
      stream >> word;
      cout << word << endl;
    }
    file.close();
  }
  else cout << "Unable to open file.\n";
*/

  return 0;
}
