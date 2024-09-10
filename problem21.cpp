#include "header.h"
// Generate Key

// key[1]: ETAI-HJUC-OREW-ETCS

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
void GenerateKeys(int NumOfKeys)
{
  for (int i = 1; i <= NumOfKeys; i++)
  {
    cout << "Key [" << i << "]: " << GenerateKey() << endl;
  }
}
int main()
{
  srand((unsigned)time(NULL));
  GenerateKeys(ReadPositiveNumber("Please Enter Number Of Keys To Generate:-"));
  return 0;
}