#include "header.h"

// Copy Array
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
void FillArrayWithRandomNumbers(int Arr[100], int &arrLength)
{
  arrLength = ReadPositiveNumber("Please Enter Number Of Array Elements");
  for (int i = 0; i < arrLength; i++)
  {
    Arr[i] = RandomNumber(1, 100);
  }
}
void CopyArray(int ArrSource[100], int ArrDestination[100] ,int arrLength)
{
 for (int i = 0; i < arrLength; i++)
 {
  ArrDestination[i] = ArrSource[i];
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
  int Arr1[100], arrLength;
  FillArrayWithRandomNumbers(Arr1, arrLength);
  cout << "Array 1 Elements : ";
  PrintArray(Arr1, arrLength);
  int Arr2[100];
  CopyArray(Arr1,Arr2, arrLength);
  cout << "Array 2 Elements After Copied: ";
  PrintArray(Arr2, arrLength);
  return 0;
}