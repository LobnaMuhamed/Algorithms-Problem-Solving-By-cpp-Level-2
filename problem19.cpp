#include "header.h"

// Random 3 Numbers from 1 to 10

int RandomNum(int From, int To)
{
  int RandNum = rand() % ((To - From + 1) + From);
  return RandNum;
}
int main()
{
  srand((unsigned)time(NULL));
  cout << RandomNum(1, 10) << endl;
  cout << RandomNum(1, 10) << endl;
  cout << RandomNum(1, 10) << endl;
  return 0;
}