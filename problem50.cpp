#include "header.h"
// My Sqrt

float ReadNumber(string Message)
{
  int Number;
  cout << Message << endl;
  cin >> Number;
  return Number;
}

float MySqrt(int Number)
{
  return pow(Number, 0.5);
}
int main()
{
  float Number = ReadNumber("Please Enter A Number");
  cout << "My MySqrt Result : " << MySqrt(Number) << endl;
  cout << "C++ sqrt Result : " << sqrt(Number) << endl;
  return 0;
}