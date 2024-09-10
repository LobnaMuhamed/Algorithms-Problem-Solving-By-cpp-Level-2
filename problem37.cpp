#include "header.h"
// Resolve Problem No 28 Using AddArrayElement

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
void AddArrayElement(int Arr[100], int &arrLength, int Element)
{
  arrLength++;
  Arr[arrLength - 1] = Element;
}
void FillArrayWithRandomNumbers(int Arr[100], int &arrLength)
{
  arrLength = ReadPositiveNumber("Please Enter Number Of Array Elements");
  for (int i = 0; i < arrLength; i++)
  {
    Arr[i] = RandomNumber(1, 100);
  }
}
void CopyArrayUsingAddArrayElement(int ArrSource[100], int ArrDestination[100], int arrLength, int &arr2Length)
{
  for (int i = 0; i < arrLength; i++)
  {
    AddArrayElement(ArrDestination, arr2Length, ArrSource[i]);
  }
}
void PrintArray(int Arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << Arr[i] << " ";
  cout << endl;
}
int main()
{
  srand((unsigned)time(NULL));
  int Arr1[100], arrLength = 0, arr2Length = 0;
  FillArrayWithRandomNumbers(Arr1, arrLength);
  cout << "Array 1 Elements : ";
  PrintArray(Arr1, arrLength);
  int Arr2[100];
  CopyArrayUsingAddArrayElement(Arr1, Arr2, arrLength, arr2Length);
  cout << "Array 2 Elements After Copied: ";
  PrintArray(Arr2, arrLength);
  return 0;
}