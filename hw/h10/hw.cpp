// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Grab Input
  string fi;
  cout << "Filename: "; cin >> fi;

  // File Exists
  ifstream file( fi );
  if ( !file ) { cout << "File not found!" << endl; return 1; }

  // Processing
  char jnk; int m, d, y, child, adult;
  while ( file >> fi >> m >> jnk >> d >> jnk >> y )
  {
    if ( y > 0 && y < 20 ) { child++; continue; }
    else if ( y == 0 && m > 9 ) { child++; continue; }
    else if ( y == 0 && m == 9 && d > 27  ) { child++; continue; }
    adult++;
  }

  // Housekeeping
  file.close();

  // Output Result
  cout << adult << " adults and " << child << " children" << endl;

  return 0;
}
