// Joshua Downes m291920
#include <iostream>
using namespace std;

int main()
{
  // Prompt User
  int cookies;
  cout << "How many cookies? "; cin >> cookies;

  // Processing
  int ate, count = 1, most = 0, total = 0;
  while ( cookies - total > 0 )
  {
    cout << "Cookies eaten on day " << count << ": "; cin >> ate;
    // Housekeeping
    total += ate; count ++;
    if ( most < ate ) { most = ate; }
  }

  // Output Result
  if ( cookies == total ) { cout << "You ate " << cookies << " cookies over " << count - 1 << " days.\nOn your piggiest day you ate " << most << " cookies." << endl; }
  else { cout << "Not enough cookies!" << endl; }

  return 0;
}
