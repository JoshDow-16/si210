#include <iostream>
using namespace std;

int main ()
{
  // Prompt User
  cout << "Enter Numbers: ";

  // Iteratively Calc Max and Avg
  float num;
  cin >> num;
  float total = 0, max = num; int count = 0;
  while ( num )
  {
    // Max
    if ( num > max ) { max = num; }

    // Avg
    total += num; count++;

    // Read Next Input
    cin >> num;
  }
  // Finalize Average
  float avg = total / count;

  // Output Result
  cout << "Average is: " << avg << ", Maximum is: " << max << endl;

  return 0;
}
