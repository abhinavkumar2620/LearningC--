#include <iostream>
using namespace std;
int main()
{
  int x;
  cout << "enter the number to check if the number is divisible by 5 or not" << endl;
  cin >> x;
  if (x % 5 == 0)
    cout << "it is divisible by 5" << endl;
  else
    cout << "it is not divisible by 5" << endl;
}