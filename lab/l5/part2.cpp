// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Process. Output Result
  int a = 1, b = 2, res, num;
  while (true )
  {
    cout << "Enter total numbers in the Fibonacci series (0 to exit): "; cin >> num;
    if (!num ) { break; }
    if ( num < 0 ) { cout << "Not in domain!" << endl; continue; }
    cout << "Result: 0 1 1 ";
    for ( int i = 0; i < num; i++ ) {
      res = a + b;
      cout << res << ' ';
      a = b; b = res;
    }
    cout << endl;
  }
  cout << "Program terminated." << endl;


  return 0;
}
