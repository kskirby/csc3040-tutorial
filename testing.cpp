#include <iostream>
#include <string>
#include <vector>
using namespace std;


/hello
void output(vector<string> to_print)
{
  for (int x=0; x<to_print.size(); x++)
  {
    cout << to_print[x];
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
