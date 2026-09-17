// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Grab File
  string fi; cin >> fi;

  // Check File
  ifstream file( fi );
  if ( !file ) { cout << "File not found!" << endl; return 1; }

  // Processing
  file >> fi >> fi;
  int a, n, win = 0, max = 0;
  while ( file >> n >> a )
  {
    if ( n > a ) { win++; }
    if ( n > max ) { max = n; }
  }

  // Output Result
  cout << "Navy won " << win << " times" << endl;
  cout << "The highest Navy score is " << max << endl;

  return 0;
}
