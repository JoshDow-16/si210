// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Grab Input
  int num;
  cout << "Enter value n, where n < 50: "; cin >> num;
  num += 1;

  // Something
  int count = 0;
  for ( int i = 1; i <= num; i++ ) {
    for ( int j = i; count < num-1; j++ ) {
      if ( j < 10 ) { cout << ' '; }
      cout << j << ' ';
      count++;
    }
    count = 0;
    cout << endl;
  }

  return 0;
}
