#include "header.h"
// Digit Frequency

int ReadPositiveNum(string Mess)
{
  int Num = 0;
  do
  {
    cout << Mess << endl;
    cin >> Num;
  } while (Num <= 0);
  return Num;
}
int CountDigitFrequency(int Num, short digit)
{
  int Reminder = 0,
      FreqCount = 0;
  while (Num)
  {
    Reminder = Num % 10;
    if (Reminder == digit)
      FreqCount++;
    Num /= 10;
  }
  return FreqCount;
}
int main()
{
  int Num = ReadPositiveNum("Enter Main Number Please?");
  short Digit = ReadPositiveNum("Enter One Digit To Check?");
  cout << "\nDigit " << CountDigitFrequency(Num, Digit) << " Time(s).\n";
  return 0;
}