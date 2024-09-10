#include "header.h"
// Print Digits In Order

int ReadPositiveNum(string Mess)
{
  int Num = 0;
  do
  {
    cout << Mess << endl;
    cin >> Num;
  } while (Num <= 0);
  return Num;
}
int ReversedNum(int Num)
{
  int Remainder = 0, Num2 = 0;
  while (Num)
  {
    Remainder = Num % 10;
    Num /= 10;
    Num2 = Num2 * 10 + Remainder;
  }
  return Num2;
}
void PrintDigitsOfNum(int Num)
{
  short Digit = 0;
  while (Num)
  {
    Digit = Num % 10;
    cout << Digit << endl;
    Num /= 10;
  }
}
int main()
{
  int Num = ReadPositiveNum("Please Enter Number :) ");
  PrintDigitsOfNum(ReversedNum(Num));
  return 0;
}
