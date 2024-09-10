#include "header.h"
// Copy Array In Reverse Order

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

void CopyReverseArray(int SourceArr[100], int DestinationArr[100], int arrLength)
{
  for (int i= 0; i< arrLength; i++)
  {
    DestinationArr[i] = SourceArr[arrLength - i - 1];
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
  int Arr[100], arrLength;
  FillArrayWithRandomNumbers(Arr, arrLength);
  cout << "\nOriginal Array\n";
  PrintArray(Arr, arrLength);
  // Reverse Array
  int Arr2[100];
  CopyReverseArray(Arr, Arr2, arrLength);
  cout << "\nCopy & Reversed Array\n";
  PrintArray(Arr2, arrLength);

  return 0;
}