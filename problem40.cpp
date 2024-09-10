#include "header.h"

// Copy Distinct Numbers To Array

void FillArray(int Arr[100], int &arrLength)
{
  arrLength = 10;
  Arr[0] = 10;
  Arr[1] = 10;
  Arr[2] = 10;
  Arr[3] = 50;
  Arr[4] = 50;
  Arr[5] = 70;
  Arr[6] = 70;
  Arr[7] = 70;
  Arr[8] = 70;
  Arr[9] = 90;
}

short FindNumberPositionInArray(int Arr[100], int element, int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    if (Arr[i] == element)
      return i;
  }
  return -1;
}

bool IsNumberInArray(int Arr[100], int element, int arrLength)
{
  return FindNumberPositionInArray(Arr, element, arrLength) != -1;
}

void AddArrayElement(int Arr[100], int &arrLength, int Element)
{
  arrLength++;
  Arr[arrLength - 1] = Element;
}

void CopyDistincNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int &DistinationLength)
{
  for (int i = 0; i < SourceLength; i++)
  {
    if (!IsNumberInArray(arrDestination, arrSource[i], DistinationLength))
      AddArrayElement(arrDestination, DistinationLength, arrSource[i]);
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
  int arrSource[100], arrDestination[100], SourceLength = 0, DestinationLength = 0;
  FillArray(arrSource, SourceLength);
  cout << "Array Elements: ";
  PrintArray(arrSource, SourceLength);
  cout << "Distinct Numbers Array Elements: ";
  CopyDistincNumbersToArray(arrSource, arrDestination, SourceLength, DestinationLength);
  PrintArray(arrDestination, DestinationLength);
}