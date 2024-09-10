#include "header.h"
// My Ceil

float ReadNumber(string Message)
{
  float Number = 0;
  cout << Message << endl;
  cin >> Number;
  return Number;
}

float GetFractional(float Number)
{
  return Number - int(Number);
}
int MyCeil(float Number)
{ // 11.3   -11.3   11   -11
  int IntPart;
  IntPart = int(Number);
  float FracationsPart = GetFractional(Number);
  if (Number < 0 || abs(FracationsPart) == 0)
    return IntPart;
  else
    return ++IntPart;
}

int main()
{
  float Number = ReadNumber("Please Enter A Float Number");
  cout << "My Ceil Result: " << MyCeil(Number) << endl;
  cout << "C++ Ceil Result: " << ceil(Number) << endl;
  return 0;
}