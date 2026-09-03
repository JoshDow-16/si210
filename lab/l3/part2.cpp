#include <iostream>
using namespace std;

int main ()
{
  char type_a, op; int a;
  cin >> type_a >> a >> op;
  if ( op == '+' )
  {
 		char type_b; int b;
    cin >> type_b >> b;

		a = type_a == 'B' ? ( a / 1000 )*8 + ( a % 1000 / 100 )*4 + ( a % 100 / 10 )*2 + ( a % 2 ) : a
		b = type_b == 'B' ? ( b / 1000 )*8 + ( b % 1000 / 100 )*4 + ( b % 100 / 10 )*2 + ( b % 2 ) : b
    int res = a + b;

		if ( res < 16 )
		{
			int res = 0; string zeroes = ""; bool numStart = false;
		  if ( (num-8) >= 0 ) { num -= 8; res += 1000; numStart = true; } else if ( !numStart ) { zeroes += '0'; }
  		if ( (num-4) >= 0 ) { num -= 4; res += 100; numStart = true; } else if ( !numStart ) { zeroes += '0'; }
		  if ( (num-2) >= 0 ) { num -= 2; res += 10; numStart = true; } else if ( !numStart ) { zeroes += '0'; }
  		if ( (num-1) >= 0 ) { res += 1; }
		}
  }
	else {}

  return 0;
}
