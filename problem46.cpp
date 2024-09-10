#include "header.h"
// MyABS

int ReadNumber(string Message)
{
  int Number;
  cout << "Enter Number: " << endl;
  cin >> Number;
  return Number;
}
int MyABS(int Num)
{
  if (Num < 0)
    return Num * -1;
  else
    return Num;
}
void PrintResult(int Num)
{
  cout << "My ABS: " << MyABS(Num) << endl;
  cout << "C++ ABS: " << abs(Num) << endl;
}
int main()
{
  PrintResult(ReadNumber("Please Enter A Number: "));
  return 0;
}