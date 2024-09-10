#include "header.h"
// Sum Of Digits

int ReadPositiveNumb(string Mess)
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
  int Digit = Num % 10;
  return Digit;
}
int SumDigits(int Num)
{
  int Sum = 0;
  while (Num)
  {
    Sum += ReverseNum(Num);
    Num /= 10;
  }
  return Sum;
}
int main()
{
  cout << SumDigits(ReadPositiveNumb("Please Enter Positive Number:-"));
  return 0;
}