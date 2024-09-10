#include "header.h"
// Guess 3-Letter Password

string ReadPassword()
{
  string Password;
  cout << "Please enter a 3-Letter Password (all capital)?\n";
  cin >> Password;
  return Password;
}
void CheckPassword(string OriginalPass)
{
  int count = 0;
  string word = "";
  for (int i = 1; i <= 26; i++)
  {
    for (int j = 1; j <= 26; j++)
    {
      for (int k = 1; k <= 26; k++)
      {
        word += char(i + 64);
        word += char(j + 64);
        word += char(k + 64);
        count++;
        cout << "Trail[" << count << "]: ";
        cout << word << endl;

        if (OriginalPass == word)
        {
          cout << "Password is " << word << endl;
          cout << "Found After " << count << " Trail(s)" << endl;
          return;
        }
        word = "";
      }
    }
  }
}

int main()
{
  string pass = ReadPassword();
  CheckPassword(pass);
  return 0;
}