// Joshua Downes m291920
#include <iostream>
using namespace std;

int main ()
{
	// Prompt User
  char let;
  cout << "Enter a letter: "; cin >> let;

	// Process Input
  string res = ('a' <= let && let <= 'z'||'A' <= let && let <= 'Z') ? "Letter" : "Not a Letter";

	// Output Result
  cout << res << endl;
  return 0;
}
