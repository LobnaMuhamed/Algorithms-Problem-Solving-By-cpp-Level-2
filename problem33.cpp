#include "header.h"
// Fill Array With Keys

enum enCharTypes
{
  SmallCharacter = 1,
  CapitalCharacter = 2,
  SpecialCharacter = 3,
  Digits = 4
};
int ReadPositiveNumber(string Message)
{
  int Num = 0;
  do
  {
    cout << Message << endl;
    cin >> Num;
  } while (Num <= 0);
  return Num;
}
char RandomChar(int From, int To)
{
  int randomChar = rand() % (To - From + 1) + From;
  return randomChar;
}
char GetRandomCharType(enCharTypes CharType)
{
  switch (CharType)
  {
  case enCharTypes::SmallCharacter:
    return char(RandomChar(97, 122));
  case enCharTypes::CapitalCharacter:
    return char(RandomChar(65, 90));
  case enCharTypes::SpecialCharacter:
    return char(RandomChar(33, 47));
  case enCharTypes::Digits:
    return char(RandomChar(48, 57));
  }
  return '.';
}
string GenerateWord(enCharTypes CharType, int Length)
{
  string word = "";
  for (int i = 0; i < Length; i++)
  {
    word += GetRandomCharType(CharType);
  }
  return word;
}
string GenerateKey()
{
  string key = "";
  key += GenerateWord(enCharTypes::CapitalCharacter, 4) + '-';
  key += GenerateWord(enCharTypes::CapitalCharacter, 4) + '-';
  key += GenerateWord(enCharTypes::CapitalCharacter, 4) + '-';
  key += GenerateWord(enCharTypes::CapitalCharacter, 4);
  return key;
}
void FillArrayWithKeys(string Arr[100], int &arrLength)
{
  arrLength = ReadPositiveNumber("Please enter Number Of Elements");
  for (int i = 0; i < arrLength; i++)
  {
    Arr[i] = GenerateKey();
  }
}
void PrintArray(string Arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    cout << "key[" << i << "]: " << Arr[i] << "\n";
  cout << endl;
}

int main()
{
  srand((unsigned)time(NULL));
  string Arr[100];
  int arrLength;
  FillArrayWithKeys(Arr, arrLength);
  PrintArray(Arr, arrLength);
  return 0;
}