// Joshua Downes m291920
#include <iostream>
using namespace std;

int main ()
{
  // Prompt User and Grab Input
  int num, numSave;
	cout << "Enter a number between 0 and 15: "; cin >> num;
	numSave = num;

  // Process Number, Count Zeroes
	int res = 0; string zeroes = ""; bool numStart = false;
  if ( (num-8) >= 0 ) { num -= 8; res += 1000; numStart = true; } else if ( !numStart ) { zeroes += '0'; }
  if ( (num-4) >= 0 ) { num -= 4; res += 100; numStart = true; } else if ( !numStart ) { zeroes += '0'; }
  if ( (num-2) >= 0 ) { num -= 2; res += 10; numStart = true; } else if ( !numStart ) { zeroes += '0'; }
  if ( (num-1) >= 0 ) { res += 1; }

	// Output Result
	cout << numSave <<" in binary is "<< zeroes << res << endl;

	return 0;
}
