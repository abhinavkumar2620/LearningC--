#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout << "entre the first   = ";
  cin >> a;
  cout << "enter the second   = ";
  cin >> b;
  cout << "enter the third   = ";
  cin >> c;
  if ((a > b) and (a > c))
  {
    cout << "then  a is the greatest" << endl;
  }
  else if (b > c and b > a)
  {
    cout << "then  a is the greatest" << endl;
  }
  else
  {
    cout << "then c is the greatest" << endl;
  }
}
