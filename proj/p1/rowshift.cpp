// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Grab Input
  string fi, fi2, o; int shift;
  cout << "Foreground file: "; cin >> fi;
  cout << "Background file: "; cin >> fi2;
  cout << "Row shift: "; cin >> shift;
  cout << "Output file: "; cin >> o;

  // Check File
  ifstream file( fi ), file2( fi2 ); ofstream out( o );
  if ( !( file && file2 ) ) { cout << "Error: Input file not found" << endl; return 1; }
  string fhead, fhead2; file >> fhead; file2 >> fhead2;
  if ( !( fhead == "P3" && fhead2 == "P3" ) ) { cout << "Error: Input file wrong type" << endl; return 1; }

  // Preprocessing
  int w1, h1, w2, h2; file >> w1 >> h1; file2 >> w2 >> h2;
  file >> fi >> fi >> fi; file2 >> fi2; out << "P3\n" << w2 << ' ' << h2 << '\n' << fi << endl;

  // Processing
  int r1, r2, g1, g2, b1, b2;
	for ( int i = 0; i < h2; i++ ) {
		for ( int j = 0; j < w2; j++ ) {
		  file2 >> r2 >> g2 >> b2;
		  out << r2 << ' ' << g2 << ' ' << b2 << ' ';
  	}
  }

  // Housekeeping
  file.close();
  file2.close();
  out << endl;
  out.close();

  return 0;
}
