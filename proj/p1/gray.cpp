// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Grab Input
  string fi, o;
  cout << "Input file: "; cin >> fi;
  cout << "Output file: "; cin >> o;

  // Check File
  ifstream file( fi ); ofstream out( o );
  if ( !file ) { cout << "Error: Input file not found" << endl; return 1; }
  string fhead; file >> fhead;
  if ( fhead != "P3" ) { cout << "Error: Input file wrong type" << endl; return 1; }

  // Processing
	int width, height, max, r, g, b, gray; file >> width >> height >> max;
  out << "P3\n" << width << ' ' << height << '\n' << max << endl;

  while ( file >> r >> g >> b ) 
  {
    gray = ( r+g+b ) / 3;
		out << gray << ' ' << gray << ' ' << gray << ' ';
	}

  // Housekeeping
  file.close();
  out << endl;
  out.close();

  return 0;
}
