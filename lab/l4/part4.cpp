// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Grab File
  string fi, o;
  cin >> fi >> o;

  // Check if File, Preprocessing
  ifstream file( fi ); ofstream out( o );
  if ( !file ) { cout << "Could not open file '" << fi << '\'' << endl; return 1; }
  string junk; file >> junk >> junk;
  out << "day\thour\ttemp\n";

  // Processing Data
  float temp, avg, max = 0, min = 32; int hour, count = 0; string dateMax, dateMin, date;
  while ( file >> date >> hour >> junk >> temp )
  {
    temp = temp*1.8 + 32;
    avg += temp;
    if ( temp > max ) { max = temp; dateMax = date; }
    if ( temp < min ) { min = temp; dateMin = date; }

    out << date << '\t' << hour + 1 << '\t' << temp << '\n';

    count++;
  }

  // Convert and Average
  avg = avg / count;

  // Housekeeping
  file.close();
  out.close();

  // Output Result
  cout << "file: " << fi << '\n' << "ave: " << avg << '\n' \
       << "min: " << min << " on " << dateMin << '\n' \
       << "max: " << max << " on " << dateMax << '\n' \
       << "output in: " << o << endl;

  return 0;
}
