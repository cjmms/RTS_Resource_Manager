
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
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

  return 0;
}
