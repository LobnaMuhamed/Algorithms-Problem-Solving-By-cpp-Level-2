#include "header.h"
// Sum Of 2 Arrays To A Third One

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

void FillArrayWithRandomNumbers(int Arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    Arr[i] = RandomNumber(1, 100);
  }
}

void SumTwoArrayToThird(int arr1[100], int arr2[100], int arrSum[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    arrSum[i] = arr1[i] + arr2[i];
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
  int arr1[100], arr2[100], arrSum[100];
  int arrLength = ReadPositiveNumber("How Many Elements: ");
  FillArrayWithRandomNumbers(arr1, arrLength);
  FillArrayWithRandomNumbers(arr2, arrLength);
  SumTwoArrayToThird(arr1, arr2, arrSum, arrLength);
  cout << "Arr 1 Elements :\n";
  PrintArray(arr1, arrLength);
  cout << "Arr 2 Elements :\n";
  PrintArray(arr2, arrLength);
  cout << "Sum Of Array1 And Array2 Elements :\n";
  PrintArray(arrSum, arrLength);
  return 0;
}