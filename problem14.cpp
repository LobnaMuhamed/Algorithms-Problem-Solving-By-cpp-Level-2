#include "header.h"
// Inverted Letter Pattern

int ReadPositiveNum(string Mess)
{
  int Num = 0;
  do {
    cout << Mess << endl;
    cin >> Num;
  }while(Num <= 0);
  return Num;
}
void InvertedLetterPattern(int Num)
{
  for (int i = Num ; i >= 1; i--)
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
  InvertedLetterPattern(Num);
  return 0;
}