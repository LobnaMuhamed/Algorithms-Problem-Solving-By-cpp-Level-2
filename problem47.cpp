#include "header.h"
// MyRound

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
int MyRound(float Number)
{
  int IntPart;
  IntPart = int(Number);
  float FracationsPart = GetFractional(Number);
  if (abs(FracationsPart) >= 0.5)
  {
    if (Number > 0)
      return ++IntPart;
    else
      return --IntPart;
  }
  else
    return IntPart;
}

int main()
{
  float Number = ReadNumber("Please Enter A Float Number");
  cout << "My Round Result: " << MyRound(Number) << endl;
  cout << "C++ Round Result: " << round(Number) << endl;
  return 0;
}