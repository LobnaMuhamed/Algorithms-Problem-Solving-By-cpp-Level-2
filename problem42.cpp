#include "header.h"

// Count Odd Numbers In Array

int ReadPostiveNumber(string Message)
{
  int Number = 0;
  do
  {
    cout << Message << endl;
    cin >> Number;
  } while (Number <= 0);
  return Number;
}
int RandomNumber(int From, int To)
{
  int randomNum = rand() % (To - From + 1) + From;
  return randomNum;
}
void FillArrayWithRandomNums(int arr[100], int &arrLength)
{
  arrLength = ReadPostiveNumber("Please Enter Number Of Elements: ");
  for (int i = 0; i < arrLength; i++)
  {
    arr[i] = RandomNumber(1, 100);
  }
}

int CountOddNumsOfArray(int arr[100], int arrLength)
{
  int count = 0;
  for (int i = 0; i < arrLength; i++)
  {
    if (arr[i] % 2 != 0)
      count++;
  }
  return count;
}

void PrintArray(int arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  srand((unsigned)time(NULL));
  int arr[100], arrLength =0 ;
  FillArrayWithRandomNums(arr, arrLength);
  cout << "Array Elements: ";
  PrintArray(arr, arrLength);
  cout << "Odd Numbers Count: " << CountOddNumsOfArray(arr, arrLength) << endl;
  return 0;
}