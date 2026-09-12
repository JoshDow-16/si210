// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Grab Input
  int a, b;
  cin >> a >> b;

  // Print the thing
  cout << "[";
  for ( int i = 0; i < a; i++ ) {
    cout << '(';
    for ( int j = 0; j < b; j++ ) {
      cout << '*';
    }
    cout << ')';
  }
  cout << "]" << endl;


  return 0;
}
