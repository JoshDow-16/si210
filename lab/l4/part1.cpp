// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Grab File
  string fi;
  cin >> fi;

  // Check if File, Preprocessing
  ifstream file( fi );
  if ( !file ) { cout << "Could not open file '" << fi << '\'' << endl; return 1; }
  string junk; file >> junk >> junk;

  // Processing Data
  float temp, avg; int count = 0;
  while ( file >> junk >> junk >> temp )
  {
    avg += temp*1.8 + 32;
    count++;
  }

  // Convert and Average
  avg = avg / count;

  // Housekeeping
  file.close();

  // Output Result
  cout << "file: " << fi << '\n' << "ave: " << avg << endl;

  return 0;
}
