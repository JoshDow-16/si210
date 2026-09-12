// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Grab Input
  string fi;
  cout << "Input file: "; cin >> fi;

  // Check File
  ifstream file( fi );
  if ( !file ) { cout << "File not found!" << endl; return 1; }
  string fhead; file >> fhead;
  if ( fhead != "P3" ) { cout << "Wrong file type!" << endl; return 1; }

  // Processing
  int width, height, max, r, g, b; file >> width >> height >> max;
  cout << fheader << '\n' << "width = " << width << ", height = " << height << '\n' << "max value = " << max << endl;
  for ( int i = 0; i < height; i++ ) {
    cout << "*** row " << i << " ***" << endl;
    for ( int j = 0; j < width; j++ ) {
      file >> r >> g >> b;
      cout << "row " << i << ", col " << j << ": r" << r << " g" << g << " b" << b << endl;
    }
  }

  // Housekeeping
  file.close();

  return 0;
}
