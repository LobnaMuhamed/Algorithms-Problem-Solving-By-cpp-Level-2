#include "header.h"
// MyFloor

#include "header.h"
// MyFloor

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
int MyFloor(float Number)
{
  int IntPart;
  IntPart = int(Number);
  float FracationsPart = GetFractional(Number);
  if (Number <= 0 && abs(FracationsPart) > 0)
    return --IntPart;
  else
    return IntPart;
}

int main()
{
  float Number = ReadNumber("Please Enter A Float Number");
  cout << "My Floor Result: " << MyFloor(Number) << endl;
  cout << "C++ Floor Result: " << floor(Number) << endl;
  return 0;
}