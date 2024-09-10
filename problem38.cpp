#include "header.h"
// Copy Odd Numbers To A New Array

enum enOddEven
{
  Even = 0,
  Odd = 1
};
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

int RandomNumber(int From, int To)
{
  int randomNum = rand() % (To - From + 1) + From;
  return randomNum;
}

void FillArrayWithRandomNums(int Arr[100], int &arrLength)
{
  arrLength = ReadPositiveNumber("Please Enter Number Of Elements:");
  for (int i = 0; i < arrLength; i++)
  {
    Arr[i] = RandomNumber(1, 100);
  }
}
void AddArrayElement(int Arr[100], int &arrLength, int Element)
{
  arrLength++;
  Arr[arrLength - 1] = Element;
}
void CopyOddNumbersArray(int SourceArr[100], int DestinationArr[100], int arrLength, int &arr2Length)
{
  for (int i = 0; i < arrLength; i++)
  {
    if (SourceArr[i] % 2 != 0)
    {
      AddArrayElement(DestinationArr, arr2Length, SourceArr[i]);
    }
  }
}
void PrintArrayElements(int Arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    cout << Arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  srand((unsigned)time(NULL));
  int arr[100], arrLength = 0;
  FillArrayWithRandomNums(arr, arrLength);
  cout << "Array Elements:";
  PrintArrayElements(arr, arrLength);
  int arr2[100], arr2Length = 0;
  CopyOddNumbersArray(arr, arr2, arrLength, arr2Length);
  cout << "Copy Odd Array Elements:";
  PrintArrayElements(arr2, arr2Length);
  return 0;
}