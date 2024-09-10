#include "header.h"
// Is Palindrome Array

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
void ReadArrayElements(int Arr[100], int &arrLength)
{
  arrLength = ReadPositiveNumber("Please Enter Number Of Elements:");
  for (int i = 0; i < arrLength; i++)
  {
    cout << "Enter Element No " << i + 1 << " Of Array:- " << endl;
    cin >> Arr[i];
  }
}
bool IsPalindromeArray(int arrSource[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    if (arrSource[i] != arrSource[arrLength - i - 1])
      return false;
  }
  return true;
}
void PrintArrayElements(int arr[100], int arrLength)
{
  cout << "\n************************\n";
  for (int i = 0; i < arrLength; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n************************\n";
}

int main()
{
  int arr[100], arrLength = 0;
  ReadArrayElements(arr, arrLength);
  cout << "Original Array:- ";
  PrintArrayElements(arr, arrLength);
  if (IsPalindromeArray(arr, arrLength)) cout << "Yes Array Is Palindrome\n";
  else cout << "No It's Not Palindrome\n";
  return 0;
}
