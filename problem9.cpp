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

void PrintAllCountOfDigitFreq(int Num)
{
  for (int i = 0; i < 10; i++)
  {
    short DigitFreq = 0;
    DigitFreq = CountDigitFrequency(Num, i);
    if (DigitFreq > 0)
      cout << "Digit " << i << " Frequency is " << DigitFreq << " Time(s)\n";
  }
}
int main()
{
  int Num = ReadPositiveNum("Please Enter Main Number:-");
  PrintAllCountOfDigitFreq(Num);
}