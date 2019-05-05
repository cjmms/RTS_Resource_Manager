
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  string line;
  ifstream file ("resource.txt");
  if (file.is_open())
  {
    while (getline(file, line))
    {
      cout << line << '\n';
    }
    file.close();
  }
  else cout << "Unable to open file.\n";

  return 0;
}
