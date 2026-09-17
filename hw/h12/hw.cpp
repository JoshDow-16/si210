// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Grab Input
  string fi;
  cout << "Filename: "; cin >> fi;

  // Check File

  // Preprocessing
  int width, height, num;
  ofstream out( "output.html" );
  out << "<html><table border=2>" << endl;


  // Processing
  int num;
  while ( file >> num )
  {
    
  }
  // Output Result
  cout << "Created output.html" << endl;

  return 0;
}
