#include <iostream>
#include <string>
#include <vector>
using namespace std;



void output(vector<string> to_print)
{
  iter print_iterator = to_print.iterator()
  while (print_iterator.next())
  {
      cout print_iterator;
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


//testing comment at end
