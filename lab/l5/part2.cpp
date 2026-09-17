// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Process. Output Result
  int a, b, res, num;
  while (true )
  {
    a = 0; b = 1;
    cout << "Enter total numbers in the Fibonacci series (0 to exit): "; cin >> num;
    if (!num ) { break; }
    if ( num < 0 ) { cout << "Not in domain!" << endl; continue; }
    cout << "Result: 0 ";
    for ( int i = 1; i < num; i++ ) {
      if ( i == 1 ) { cout << "1 "; continue;  }
      res = a + b;
      cout << res << ' ';
      a = b; b = res;
    }
    cout << endl;
  }
  cout << "Program terminated." << endl;


  return 0;
}
