// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Grab Input
  int num;
  cout << "Enter height of tree: "; cin >> num;

  // Rrocessing
  for ( int i = 0; i < num; i++ ) {
    for ( int j = 0; j < num - i; j++ ) { cout << ' ';  }
    for ( int j = 0; j < ( 1 + i * 2 ); j++ ) { cout << '*'; }
    cout << endl;
  }

  return 0;
}
