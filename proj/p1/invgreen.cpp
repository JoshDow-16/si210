// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Grab Input
  string fi, fi2, o;
  cout << "Foreground file: "; cin >> fi;
  cout << "Background file: "; cin >> fi2;
  cout << "Output file: "; cin >> o;

	// Check File
  ifstream file( fi ), file2( fi2 ); ofstream out( o );
  if ( !( file && file2 ) ) { cout << "Error: Input file not found" << endl; return 1; }
  string fhead, fhead2; file >> fhead; file2 >> fhead2;
  if ( !( fhead == "P3" && fhead2 == "P3" ) ) { cout << "Error: Input file wrong type" << endl; return 1; }

	// Check File Sizes, Preprocessing
  int w1, h1, w2, h2; file >> w1 >> h1; file2 >> w2 >> h2;
  if ( w1 != w2 || h1 != h2 ) { cout << "Error: Input files off size" << endl; return 1; }
  file >> fi; file2 >> fi2; out << "P3\n" << w1 << ' ' << h2 << '\n' << fi << endl;

  // Processing
	int r1, r2, g1, g2, b1, b2;
  while ( ( file >> r1 >> g1 >> b1 ) && ( file2 >> r2 >> g2 >> b2 ) )
  {
    if ( !( r1 < 100 && b1 < 100 ) && g1 ) { out << r2 << ' ' << g2 << ' ' << b2 << ' '; }
    else { out << r1 << ' ' << g1 << ' ' << b1 << ' '; }
  }

  // Housekeeping
  file.close();
  file2.close();
  out << endl;		
  out.close();

  return 0;
}
