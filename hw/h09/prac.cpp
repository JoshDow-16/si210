// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Grab Input
  string inp;
  cout << "Filename? "; cin >> inp;

  // Process Data
  ifstream input( inp );
  ofstream even( "even.txt" ), odd( "odd.txt" );

  int num;
  while ( input >> num )
  {
    if ( num % 2 ) { odd << num << ' '; }
    else { even << num << ' '; }
  }

  // Housekeeping
  odd << endl;
  even << endl;

  odd.close();
  even.close();
  input.close();

  return 0;
}
