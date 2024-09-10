#include "header.h"
// Check Number In Array

int RandomNumber(int From, int To)
{
  int randomNumber = rand() % (To - From + 1) + From;
  return randomNumber;
}
int ReadPositiveNumber(string Message)
{
  int Num;
  do
  {
    cout << Message << endl;
    cin >> Num;
  } while (Num <= 0);
  return Num;
}
int ReadNumber()
{
  int Number;
  cout << "Please Enter Number To Search For:-\n";
  cin >> Number;
  return Number;
}
void FillArrayWithRandomNumbers(int Arr[100], int &arrLength)
{
  arrLength = ReadPositiveNumber("Please Enter Number Of Array Elements");
  for (int i = 0; i < arrLength; i++)
  {
    Arr[i] = RandomNumber(1, 100);
  }
}
void PrintArray(int Arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << Arr[i] << " ";
  cout << endl;
}

short FindNumberPositionInArray(int Arr[100], int element, int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    if (Arr[i] == element)
      return i;
  }
  return -1;
}
bool IsNumberInArray(int Arr[100], int element, int arrLength)
{
  return  FindNumberPositionInArray(Arr, element, arrLength) != -1;
}
int main()
{
  srand((unsigned)time(NULL));
  int Arr[100], arrLength;
  FillArrayWithRandomNumbers(Arr, arrLength);
  cout << "Elements Of Array:-\n";
  PrintArray(Arr, arrLength);
  int Number = ReadNumber();
  cout << "Number You Are Looking For Is: " << Number << endl;
  if (IsNumberInArray(Arr, Number, arrLength))
    cout << "The Number Found :-)\n";
  else
    cout << "The Number Is Not Found :-(\n";
  return 0;
}