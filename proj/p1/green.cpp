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


  return 0;
}
