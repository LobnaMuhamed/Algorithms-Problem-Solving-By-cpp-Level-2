#include "header.h"
// Repeated Elements Count In Array

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
void ReadArray(int Arr[100], int &arrLength)
{
  arrLength = ReadPositiveNumber("Enter Array Elements:");
  for (int i = 0; i < arrLength; i++)
  {
    cout << "Element [" << i + 1 << "]: ";
    cin >> Arr[i] ;
  }
}
void PrintArray(int Arr[100], int Length)
{
  cout << "Original array: ";
  for (int i = 0; i < Length; i++)
    cout << Arr[i] << " ";
  cout << endl;
}
int TimeRepeated(int Arr[100], int Num, int arrLength)
{
  int FreqCount = 0;
  for (int i = 0; i < arrLength; i++)
  {
    if (Arr[i] == Num)
      FreqCount++;
  }
  return FreqCount;
}
int main()
{
  int arrLength , Arr[100];
  ReadArray(Arr, arrLength);
  int CheckedNum = ReadPositiveNumber("Enter The Number You Want To Check:");
  PrintArray(Arr, arrLength);
  cout << CheckedNum << " is repeated " << TimeRepeated(Arr, CheckedNum, arrLength) << " time(s)\n";
  return 0;
}