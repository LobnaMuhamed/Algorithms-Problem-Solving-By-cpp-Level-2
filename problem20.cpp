#include "header.h"
/*
Random Small Letter, Capital Letter, Special C
and Digit in order
*/
int RandomNum(int From, int To)
{
  int RandNum = rand() % (To - From + 1) + From;
  return RandNum;
}
enum enCharType
{
  SmallLetter = 1,
  CapitalLetter = 2,
  SpecialCharacter = 3,
  Digit = 4
};
char GetRandomCharacter(enCharType CharType)
{
  switch (CharType)
  {
  case enCharType::SmallLetter:
    return char(RandomNum(97, 122));
  case enCharType::CapitalLetter:
    return char(RandomNum(65, 90));
  case enCharType::SpecialCharacter:
    return char(RandomNum(33, 47));
  case enCharType::Digit:
    return char(RandomNum(48, 57));
  }
  return '.';
}
int main()
{
  cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
  cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
  cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
  cout << GetRandomCharacter(enCharType::Digit) << endl;
  return 0;
}