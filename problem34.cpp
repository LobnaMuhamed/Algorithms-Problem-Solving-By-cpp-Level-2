#include "header.h"
// Return number index in array

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
void PrintArray(int Arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << Arr[i] << " ";
  cout << endl;
}

short FindNumberPositionInArray(int Arr[100], int element , int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    if (Arr[i] == element)
      return i;
  }
  return -1;
}
int ReadNumber()
{
  int Number;
  cout << "Please Enter Number To Search For:-\n";
  cin >> Number;
  return Number;
}
int main()
{
  srand((unsigned)time(NULL));
  int Arr[100], arrLength;
  FillArrayWithRandomNumbers(Arr, arrLength);
  cout << "Elements Of Array:-\n";
  PrintArray(Arr, arrLength);
  int Number = ReadNumber();
  cout << "Number You Are Looking For Is: " << Number << endl;
  short idx = FindNumberPositionInArray(Arr, Number, arrLength);
  if (idx >= 0)
  {
    cout << "The Number Found At Position: " << idx << endl;
    cout << "The Number Found Its Order: " << idx + 1 << endl;
  }
  else
    cout << "The Number Is Not Found :-(\n";
  return 0;
}