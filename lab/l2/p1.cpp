// Joshua Downes m291920
#include <iostream>
using namespace std;

int main ()
{
  // Prompt User and Grab Input
  int bin;
	cout << "Enter a 4-bit binary number: "; cin >> bin;

  // Process 4-Bit Binary
  int res = ( bin / 1000 )*8 + ( bin % 1000 / 100 )*4 + ( bin % 100 / 10 )*2 + ( bin % 2 );

  // Output Result
	cout << "In decimal " << binString << " = " << res << endl;

	return 0;
}

/*either grab a string, and convert

cant typecast, requires string parsing

or grab an int and process

have to check the length of the number using arithmetic*/
