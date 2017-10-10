#include <iostream>
#include <string>
#include <vector>
using namespace std;

// comment
bool input(string str)
{
	cin >> str;
	return true;
}

void output(vector<string> to_print)
{
  vector<string>::iterator iter = to_print.begin();
  while (iter != to_print.end())
  {
      cout << *iter;
      iter++;
  }

}

int main()
{

  string var1 = "Hello, ";
  string var2 = "world";
  string var3 = "!\n";
  vector<string> write_this;
  write_this.push_back(var1);
  write_this.push_back(var2);
  write_this.push_back(var3);
  output(write_this);
}
