#include "header.h"
/* My Solution is Like The Perfect Solution :) */

// Perfect Number
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
void PrintResult(int Num)
{
  if (IsPerfectNum(Num))
    cout << "Perfect Number\n";
  else
    cout << "Not Perfect Number\n";
}
int main()
{
  PrintResult(ReadPostiveNumber("Please Enter Positive Number:"));
  return 0;
}