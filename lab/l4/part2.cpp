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
  float temp, avg, max = 0, min = 32; int count = 0; string dateMax, dateMin, date;
  while ( file >> date >> junk >> temp )
  {
    temp = temp*1.8 + 32;
    avg += temp;
    if ( temp > max ) { max = temp; dateMax = date; }
    if ( temp < min ) { min = temp; dateMin = date; }
    count++;
  }

  // Convert and Average
  avg = avg / count;

  // Housekeeping
  file.close();

  // Output Result
  cout << "file: " << fi << '\n' << "ave: " << avg << '\n' \
       << "min: " << min << " on " << dateMin << '\n' \
       << "max: " << max << " on " << dateMax << endl;

  return 0;
}
