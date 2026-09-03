#include <iostream>
using namespace std;

int main ()
{
  // Prompt User
  int start, end;
  cout << "Enter start time: "; cin >> start;
  cout << "Enter end time: "; cin >> end;


  // Process Numbers
  int hr = end / 100 - start / 100;
  int min = end % 100 - start % 100;

  if ( min < 0 ) { hr--; min = 60 - min * -1; }

  // Output Result
  cout << "Duration: " << hr << " hours " << min << " minutes" << endl;

  return 0;
}
