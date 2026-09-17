// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Grab Inputs
  string fi; cin >> fi;

  // Check File
  int width;
  ifstream file( fi );
  if ( !file ) { cout << "File not found!" << endl; return 1; }
  file >> fi >> fi >> width;

  // Processing
  int pos, step = 0; char jnk;
  cout << "Enter position between 1 and "<< width <<": "; cin >> pos;
  if ( !( pos > 0 && pos < ( width + 1 ) ) ) { cout << "Invalid position!" << endl; return 1; }
  while ( file >> jnk )
  {
    step++;
    for ( int i = 0; i < width; i++ ) {
      file >> jnk;
      if ( jnk == 'X' && (i+1) == pos ) { cout << "You died on step " << step << endl; return 0; }
    }
    file >> jnk;
  }

  cout << "You survived!" << endl;

  return 0;
}
