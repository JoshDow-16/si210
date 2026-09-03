#include <iostream>
using namespace std;

int main ()
{
  char type_a, op; int a;
  cin >> type_a >> a >> op;

	int res;
  if ( op == '+' )
  {
 		char type_b; int b;
    cin >> type_b >> b;

		a = type_a == 'B' ? ( a / 1000 )*8 + ( a % 1000 / 100 )*4 + ( a % 100 / 10 )*2 + ( a % 2 ) : a
		b = type_b == 'B' ? ( b / 1000 )*8 + ( b % 1000 / 100 )*4 + ( b % 100 / 10 )*2 + ( b % 2 ) : b
    res = a + b;


  }
	else { res = a; }

	char res_type;
	if ( res < 16 )
	{
		int res_bin = 0; string zeroes = ""; bool numStart = false; res_type = 'B';
	  if ( (num-8) >= 0 ) { res -= 8; res_bin += 1000; numStart = true; } else if ( !numStart ) { zeroes += '0'; }
		if ( (num-4) >= 0 ) { res -= 4; res_bin += 100; numStart = true; } else if ( !numStart ) { zeroes += '0'; }
	  if ( (num-2) >= 0 ) { res -= 2; res_bin += 10; numStart = true; } else if ( !numStart ) { zeroes += '0'; }
		if ( (num-1) >= 0 ) { res_bin += 1; }
	}
	else { res_type = 'D'; }



	cout << res_type << res << endl;

  return 0;
}
