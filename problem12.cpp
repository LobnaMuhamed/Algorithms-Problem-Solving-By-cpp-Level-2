#include "header.h"
// Inverted Number Pattern

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

void InvertNumberPattern(int Num)
{
  for (int i = Num; i >= 1; i--)
  {
    int j = i;
    while (j)
    {
      cout << i;
      j--;
    }
    cout << endl;
  }
}
int main()
{
  int Num = ReadPositiveNum("Enter Number Please:-");
  InvertNumberPattern(Num);
  return 0;
}