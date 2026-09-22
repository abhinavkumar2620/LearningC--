#include <iostream>
using namespace std;
int main()
{
  int cp, sp, x;
  cout << "entre the cost price = ";
  cin >> cp;
  cout << "enter the selling price = ";
  cin >> sp;
  x = sp - cp;
  if (x > 0)
  {
    cout << "made the proffit" << endl;
    cout << "the amount of proffit got is = " << x << endl;
  }
  else if (x < 0)
  {
    cout << "made the loss" << endl;
    cout << "the amount of loss got is = " << x << endl;
  }
  else
    cout << "no profit no loss";
}