#include "header.h"
// Multiplication Table From 1 to 10


/*
// My Solution
void OrgTable()
{
  cout << "\n\t\t\t Multiplication Table From 1 to 10 \t\t\t\n\n";
  for (int i = 1; i <= 10; i++)
  {
    cout << "\t" << i;
  }
  cout << "\n";
  for (int i = 1; i <= 85; i++)
  {
    cout << "_";
  }
  cout << "\n";
}

void MultiTableFrom1To10()
{
  for (int i = 1; i <= 10; i++)
  {
    for (int j = 1; j <= 10; j++)
    {
      if (j == 1)
      {
        if(i != 10)
          cout << j * i << "   |   ";
        else
          cout << j * i << "  |   ";
        cout << j * i << "\t";
      }
      else
        cout << j * i << "\t";
    }
    cout << "\n";
  }
}

int main()
{
  OrgTable();
  MultiTableFrom1To10();

  return 0;
}
*/

// Perfect Solution

void PrintTableHeader()
{
  cout << "\n\n\t\t\t Multiplication Table From 1 To 10\n\n";
  cout << "\t";
  for (int i = 1; i <= 10; i++)
  {
    cout << i << "\t";
  }
  cout << "\n___________________________________________________________________________________\n";
}
string ColumnSperator(int i)
{
  if (i < 10)
    return "   |";
  else
    return "  |";
}
void PrintMultiplicationTable()
{
  PrintTableHeader();
  for (int i = 1; i<= 10; i++)
  {
    cout << " " << i << ColumnSperator(i) << "\t";
    for (int j = 1; j <= 10; j++)
    {
      cout << i * j << "\t";
    }
    cout << endl;
  }
}
int main()
{
  PrintMultiplicationTable();
  return 0;
}