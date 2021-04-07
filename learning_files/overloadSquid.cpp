#include <iostream>
#include <string>
#include <vector>

using namespace std;

class squid
{
private:
  string name;

public:
  vector<string> colours;

  squid(string _name)
    : name(_name) {}

  // conversion type - I'm using this for 'cout'
  operator const char* ()
  {
    string output = "name: " + name;

    // converts string to const char*
    return output.c_str();
  }

  string operator [] (size_t index)
  {
    if (index < colours.size())
      return colours[index];
  }

  // used to insert elements in 'colours' array
  void operator () (string squidType)
  {
    colours.push_back(squidType);
  }

  // used to compare two squids
  bool operator == (squid compareSquid)
  {
    return (name == compareSquid.name);
  }
};

int main()
{
  squid dynamicSquid("Dynamic Squid");
  squid fuzzySquid("Fuzzy Squid");

  // using the comparision operator
  if (dynamicSquid != fuzzySquid)
    cout << "They have the same name!\n";
  
  // using the function operator
  dynamicSquid("pink");
  dynamicSquid("blue");
  dynamicSquid("red");

  cout << "Here are my favourite colours:\n";

  for (size_t a = 0; a < dynamicSquid.colours.size(); ++a)
    cout << dynamicSquid[a] << '\n'; // this is possible due to conversion operator
}