// Joshua Downes m291920
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  // Grab Input
  string disc; cin >> disc;

  // Processing
  float price; string item; char jnk;
  if ( disc == "Discount:" )
  {
    float perc;
    cin >> perc >> disc >> disc >> jnk >> price >> item;
    cout << '$' << price - ( perc * price / 100 );
  }

  else
  {
    cin >> jnk >> price >> item;
    cout << '$' << price;
  }

  // Output Result
  cout << ' ' << item << endl;

  return 0;
}

