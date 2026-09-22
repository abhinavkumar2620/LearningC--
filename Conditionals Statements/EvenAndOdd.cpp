#include <iostream>
using namespace std;
int main()
{
  int x;
  cout << "enter the number to check it's even or odd " << endl;
  cin >> x;
  if (x % 2 == 0)
  {
    cout << "this is the even number " << endl;
  }
  else
  {
    cout << "this is the odd number " << endl;
  }
}