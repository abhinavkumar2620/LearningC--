#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout << "entre the first side  = ";
  cin >> a;
  cout << "enter the second side  = ";
  cin >> b;
  cout << "enter the third side  = ";
  cin >> c;
  if ((a + b) > c and (b + c) > a and (c + a) > b)
  {
    cout << "they are the sides of the triangle" << endl;
  }
  else
  {
    cout << "they are not the sides of the triangle";
  }
}
