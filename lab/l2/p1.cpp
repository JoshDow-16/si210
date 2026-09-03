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

  // Chesse with Hard-Coding :(
  string binString;  
  if ( res < 2 ) { binString = "000" + to_string( bin ); }
  else if ( res < 4 ) { binString = "00" + to_string( bin ); }
  else if ( res < 8 ) { binString = "0" + to_string( bin ); }
  else { binString = to_string( bin ); }
   

  // Output Result
	cout << "In decimal " << binString << " = " << res << endl;

	return 0;
}
