#include "header.h"

// Palindrome Number
int ReadPositiveNumber(string Mess)
{
  int Num = 0;
  do{
    cout << Mess << endl;
    cin >> Num;
  }while(Num <= 0);
  return Num;
}

int ReverseNum(int Num)
{
  int Remainder = 0, Num2 = 0;
  while (Num)
  {
    Remainder = Num % 10;
    Num2 = Num2 * 10 + Remainder;
    Num /= 10;
  }
  return Num2;
}

bool CheckPalindrome(int Num)
{
  int RevNum = ReverseNum(Num);
  return (RevNum == Num);
}

void PrintResult(int Num)
{
  if (CheckPalindrome(Num))
    cout << "It Is A Palindrome Number\n";
  else
    cout << "It Is Not A Palindrome Number\n";
}
int main()
{
  int Num = ReadPositiveNumber("Please Enter Number:-");
  PrintResult(Num);
  return 0;
}