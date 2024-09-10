#include "header.h"
//  Number Pattern

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

void NumberPattern(int Num)
{
  for (int i = 1; i <= Num; i++)
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
  NumberPattern(Num);
  return 0;
}