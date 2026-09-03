#include <iostream>
using namespace std;

int main ()
{
  // Prompt User
  cout << "Enter numbers separated by spaces and terminated with a negative number." << endl;

  // Iteratively Calc Max and Avg
  float num;
  cin >> num;
  float total = 0, max = num; int count = 0;
  while ( num > 0 )
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
	cout << "The average is " << avg << "\nThe maximum is " << max << endl;

  return 0;
}
