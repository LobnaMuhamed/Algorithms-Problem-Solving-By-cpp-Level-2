#include "header.h"
// Add Array Element Simi Dynamic

int ReadNumberOfElement()
{
  int Number;
  cout << "Please Enter A Number? ";
  cin >> Number;
  return Number;
}

void AddArrayElement(int Arr[100],int &arrLength ,int Element)
{
  arrLength++;
  Arr[arrLength - 1] = Element;
}
bool CheckContinuity()
{
  bool Flag = true;
  cout << "Do you want to add more numbers? [0]:No , [1]:Yes? ";
  cin >> Flag;
  return Flag;
}
int AllocateArray(int Arr[100])
{
  int Number, count = 0;
  do
  {
    Number = ReadNumberOfElement();
    AddArrayElement(Arr,count ,Number);
  } while (CheckContinuity());
  return count;
}
void PrintArray(int Arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << Arr[i] << " ";
  cout << endl;
}

int main()
{
  int Arr[100];
  int arrLength = AllocateArray(Arr);
  cout << "\nArray Length: " << arrLength << endl;
  cout << "Array Elements: ";
  PrintArray(Arr, arrLength);
  return 0;
}