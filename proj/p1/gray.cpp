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
  if ( !file ) { cout << "File not found!" << endl; return 1; }
  string fheader; file >> fheader;
  if ( fheader != "P3" ) { cout << "Wrong file type!" << endl; return 1; }

  // Housekeeping
  file.close();
  out << endl;
  out.close();

  return 0;
}
