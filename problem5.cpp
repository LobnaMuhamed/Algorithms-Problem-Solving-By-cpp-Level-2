#include "header.h"

// Print Digits in a Reversed Order

int ReadPositiveNum(string Mess)
{
  int Num = 0;
  do {
    cout << Mess << endl;
    cin >> Num;
  }while(Num <= 0);
  return Num;
}

int ReversedNum(int Num)
{
  int digit = Num % 10;
  return digit;
}
void PrintResult(int Num)
{
  int Remainder = 0;
  while(Num)
  {
    Remainder = ReversedNum(Num);
    cout << Remainder << endl;
    Num /= 10;
  }
}
int main()
{
  PrintResult(ReadPositiveNum("Please Enter A Positive Number:-"));
  return 0;
}