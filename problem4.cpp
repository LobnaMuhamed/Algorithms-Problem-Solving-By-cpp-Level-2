#include "header.h"
/* My Solution is Like The Perfect Solution :) */

// Perfect Number From 1 To N

int ReadPostiveNumber(string Mess)
{
  int Num = 0;
  do
  {
    cout << Mess << endl;
    cin >> Num;
  } while (Num <= 0);
  return Num;
}
bool IsPerfectNum(int Num)
{
  int sum = 0;
  for (int i = 1; i < Num; i++)
  {
    if (Num % i == 0)
      sum += i;
  }
  return (sum == Num);
}

void PrintPerfectNumFrom1ToN(int Num)
{
  for (int i = 1; i <= Num ; i++)
  {
    if (IsPerfectNum(i))
      cout << i << endl;
  
  }
}
int main()
{
  PrintPerfectNumFrom1ToN(ReadPostiveNumber("Please Enter Positive Number:"));
  return 0;
}