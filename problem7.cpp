#include "header.h"
// Reversed Number

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

int ReverseNum(int Num)
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
int main()
{
  int Num = ReadPositiveNum("Please Enter Positive Number:");
  cout << "Reversed Number:\n"
       << ReverseNum(Num) << endl;
  return 0;
}