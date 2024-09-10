#include "header.h"

string ReadText()
{
  string Text = "";
  cout << "Enter Text:-\n";
  getline(cin, Text);
  return Text;
}

string EncryptedText(string Text, int EncryptionKey)
{
  string EncText = "";
  for (int i = 0; i < Text.length(); i++)
  {
    EncText += char(int(Text[i]) + EncryptionKey);
  }
  return EncText;
}

string DecryptedText(string Text, int EncryptionKey)
{
  string DecText = "";
  for (int i = 0; i < Text.length(); i++)
  {
    DecText += char(int(Text[i]) - EncryptionKey);
  }
  return DecText;
}
int main()
{
  string Text = ReadText();
  int EncryptionKey = 2;
  string TextAfterEncryption, TextAfterDecryption;
  TextAfterEncryption = EncryptedText(Text, EncryptionKey);
  TextAfterDecryption = DecryptedText(TextAfterEncryption, EncryptionKey);
  cout << "Encrepted Text Is :- " << TextAfterEncryption << endl;
  cout << "Decrepted Text Is :- " << TextAfterDecryption << endl;
  return 0;
}
