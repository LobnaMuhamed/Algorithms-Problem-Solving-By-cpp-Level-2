#include "header.h"
// Copy Prime Numbers To A New Array
enum enPrimeNotPrime
{
  NotPrime = 0,
  Prime = 1
};

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
int RandomNumber(int From, int To)
{
  int randomNum = rand() % (To - From + 1) + From;
  return randomNum;
}
void FillArrayWithRandomNums(int Arr[100], int &arrLength)
{
  arrLength = ReadPositiveNumber("Please Enter Number Of Elements");
  for (int i = 0; i < arrLength; i++)
  {
    Arr[i] = RandomNumber(1, 100);
  }
}
enPrimeNotPrime CheckPrimeNum(int Num)
{
  int M = round(Num / 2);
  for (int count = 2; count <= M; count++)
  {
    if (Num % count == enPrimeNotPrime::NotPrime)
      return enPrimeNotPrime::NotPrime;
  }
  return enPrimeNotPrime::Prime;
}
void AddArrayElement(int Arr[100], int &arrLength, int Element)
{
  arrLength++;
  Arr[arrLength - 1] = Element;
}

void CopyPrimeNumberArray(int SourceArr[100], int DestinationArr[100], int arrLength, int &arr2Length)
{
  for (int i = 0; i < arrLength; i++)
  {
    if (CheckPrimeNum(SourceArr[i]) == enPrimeNotPrime::Prime)
      AddArrayElement(DestinationArr, arr2Length, SourceArr[i]);
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
  cout << "Original Array: \n";
  PrintArrayElements(arr, arrLength);
  int arr2[100], arr2Length = 0;
  CopyPrimeNumberArray(arr, arr2 ,arrLength, arr2Length);
  cout << "Copy Prime Elements: \n";
  PrintArrayElements(arr2, arr2Length);
  return 0;
}