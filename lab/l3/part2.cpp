#include <iostream>
using namespace std;

int main ()
{
	// Iteratively Grab Input and Process Data
  char type_a, op; int a;
  cin >> type_a >> a >> op;

	int res;
  if ( op == '+' )
  {
 		char type_b; int b;
    cin >> type_b >> b;

		a = type_a == 'B' ? ( a / 1000 )*8 + ( a % 1000 / 100 )*4 + ( a % 100 / 10 )*2 + ( a % 2 ) : a;
		b = type_b == 'B' ? ( b / 1000 )*8 + ( b % 1000 / 100 )*4 + ( b % 100 / 10 )*2 + ( b % 2 ) : b;
    res = a + b;
  }
	else { res = a; }

	// Assign Base Type and Format
	char res_type; string zeroes = ""; 
	if ( res < 16 )
	{
	  int res_bin = 0; bool numStart = false; res_type = 'B';
	  if ( ( res - 8 ) >= 0 ) { res -= 8; res_bin += 1000; numStart = true; } else if ( !numStart ) { zeroes += '0'; }
		if ( ( res - 4 ) >= 0 ) { res -= 4; res_bin += 100; numStart = true; } else if ( !numStart ) { zeroes += '0'; }
	  if ( ( res - 2 ) >= 0 ) { res -= 2; res_bin += 10; numStart = true; } else if ( !numStart ) { zeroes += '0'; }
		if ( ( res - 1 ) >= 0 ) { res_bin += 1; }
		res = res_bin;
	}
	else { res_type = 'D'; }

	// Output Result
	cout << res_type;
	if ( res_type == 'B' ) { cout << zeroes; }
	cout << res << endl;

  return 0;
}
