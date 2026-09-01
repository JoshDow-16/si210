// Joshua Downes m291920
#include <iostream>
using namespace std;

int main ()
{
  char let;
  cout << "Enter character: ";
  cin >> let;
  string res = ('a' <= let && let <= 'z'||'A' <= let && let <= 'Z') ? "Letter." : "Not a letter.";
  cout << res << endl;
  return 0;
}
