#include "header.h"
/* My Solution is Like The Perfect Solution :)*/

// Print All Prime Number 1 To N

enum enPrimeNotPrime{
  NotPrime = 0,
  Prime = 1,
};
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
enPrimeNotPrime CheckPrimeNum(int i)
{
  int M = round(i / 2);
  for (int counter = 2; counter <= M; counter++)
  {
    if (i % counter == 0)
      return enPrimeNotPrime::NotPrime;
  }
  return enPrimeNotPrime::Prime;
}
void PrintPrimeNum(int Number)
{
  for (int i = 1; i <= Number; i++)
  {
    if (CheckPrimeNum(i) == enPrimeNotPrime::Prime)
      cout << i << endl;
  }
}
int main()
{
  PrintPrimeNum(ReadPositiveNum("Please Enter Number:"));
  return 0;
}