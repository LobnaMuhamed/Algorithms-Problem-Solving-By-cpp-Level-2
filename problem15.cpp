#include "header.h"
// Letter Pattern

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
void LetterPattern(int Num)
{
  for (int i = 1; i <= Num; i++)
  {
    int j = i;
    while (j)
    {
      cout << char(i + 64);
      j--;
    }
    cout << endl;
  }
}
int main()
{
  int Num = ReadPositiveNum("Enter Number Please");
  LetterPattern(Num);
  return 0;
}