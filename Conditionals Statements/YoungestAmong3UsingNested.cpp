#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout << "entre the age of ram   = ";
  cin >> a;
  cout << "enter the age of shyam   = ";
  cin >> b;
  cout << "enter the age of ajay   = ";
  cin >> c;
  if (a < b)
  {
    if (a < c)
    {
      cout << "ram is youngest";
    }
    else
      cout << "ajay is the youngest";
  }
  else
  {
    if (b < c)
    {
      cout << "shyam is the youngest";
    }
    else
    {
      cout << "ajay is the youngest";
    }
  }
}
