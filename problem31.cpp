#include "header.h"
// Shuffle Ordered Array

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
void Swap(int &A, int &B)
{
  int Temp = A;
  A = B;
  B = Temp;
}
void FillArrayWithRandomNumbers(int Arr[100], int &arrLength)
{
  arrLength = ReadPositiveNumber("Please Enter Number Of Array Elements");
  for (int i = 0; i < arrLength; i++)
  {
    Arr[i] = RandomNumber(1, 100);
  }
}

void ShuffleArray(int Arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    Swap(Arr[RandomNumber(1, arrLength) - 1],
         Arr[RandomNumber(1, arrLength) - 1]);
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
  cout << "Array Before Shuffling:-\n";
  PrintArray(Arr, arrLength);
  ShuffleArray(Arr, arrLength);
  cout << "Array Before Shuffling:-\n";
  PrintArray(Arr, arrLength);
  return 0;
}