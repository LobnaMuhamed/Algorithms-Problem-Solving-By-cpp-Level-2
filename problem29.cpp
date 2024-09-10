#include "header.h"
// Copy Only Prime Numbers

enum enPrimeNotPrime
{
  NotPrime = 0,
  Prime = 1
};
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
  for (int i = 0; i < arrLength; i++)
  {
    cout << Arr[i] << " ";
  }
  cout << endl;
}
bool CheckPrimeNum(int Num)
{
  int M = Num / 2;
  for (int count = 2; count <= M; count++)
  {
    if (Num % count == enPrimeNotPrime::NotPrime)
      return false;
  }
  return true;
}
void CopyPrimeElements(int SourceArr[100], int DestinationArr[100], int arrLength, int &arrLength2)
{
  int count = 0;
  for (int i = 0; i < arrLength; i++)
  {
    if (CheckPrimeNum(SourceArr[i]) == 1)
    {
      DestinationArr[count] = SourceArr[i];
      count++;
    }
  }
  arrLength2 = --count;
}
int main()
{
  srand((unsigned)time(NULL));
  int Arr1[100],  arrLength;
  FillArrayWithRandomNumbers(Arr1, arrLength);
  cout << "Number Elements Of Array 1: ";
  PrintArrayElements(Arr1, arrLength);
  int Arr2[100], arrLength2;
  CopyPrimeElements(Arr1, Arr2, arrLength, arrLength2);
  cout << "Prime Number Elements Of Array 2: ";
  PrintArrayElements(Arr2, arrLength2);
  return 0;
}