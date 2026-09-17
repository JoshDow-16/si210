// Joshua Downes m291920
#include <iostream>
using namespace std;

int main ()
{
	// Prompt User
  double a, b; char jnk;
  cout << "Values for a and b? "; cin >> a >> jnk >> b;

	// Parse Operation
  string op;
  cout << "What do you want? "; cin >> op;

	// Perform Operation
  char to;
  if ( op == "add" )
	{
		double num; string junk; 
    cin >> num >> junk >> to;
		if ( to == 'a' ) { a += num; }
		else if ( to == 'b' ) { b += num; }
		else { cout << "Invalid Value." << endl; return 0; }
	}

	else if ( op == "square" )
	{
		cin >> to;
    if ( to == 'a' ) { a *= a; }
		else if ( to == 'b' ) { b *= b; }
    else { cout << "Invalid Value." << endl; return 0; }
	}

	// Output Result
  cout << "a = " << a << " and b = " << b << endl;
  return 0;
}
