// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Grab Input
  string fi;
  cout << "Filename: "; cin >> fi;

  // Prepocessing
  ifstream file( fi );
  file >> fi >> fi >> fi >> fi;

  // Process Data
  string name, bestSt; float score, hw, quiz, exam, bestSc = 0;
  while ( file >> name >> hw >> quiz >> exam )
  {
    // Output Info
    score = .2*( hw + quiz ) + .6*exam;
    cout << name << "   " << score << endl;
    if ( score > bestSc ) { bestSc = score; bestSt = name; }
  }

  // Housekeeping
  file.close();
  cout << "The best student is " << bestSt << '.' << endl;

  return 0;
}
