#include "header.h"
// Sum Of Random Array

int RandomNumber(int From, int To)
{
  int randomNumber = rand() % (To - From + 1) + From;
  return randomNumber;
}
int ReadPositiveNumber(string Message)
{
  int Number = 0;
  do
  {
    cout << Message << endl;
    cin >> Number;
  } while (Number <= 0);
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
void PrintArrayElements(int Arr[100], int arrLength)
{
  cout << "Array Elements: ";
  for (int i = 0; i < arrLength; i++)
  {
    cout << Arr[i] << " ";
  }
  cout << endl;
}
int SumOfElement(int Arr[100], int arrLength)
{
  int sum = 0;
  for (int i = 0; i < arrLength; i++)
  {
    sum += Arr[i];
  }
  return sum;
}
int main()
{
  srand((unsigned)time(NULL));
  int Arr[100], arrLength;
  FillArrayWithRandomNumbers(Arr, arrLength);
  int sum = SumOfElement(Arr, arrLength);
  PrintArrayElements(Arr, arrLength);
  cout << "Sum Of Element: " << sum << endl;
  return 0;
}