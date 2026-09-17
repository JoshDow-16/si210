#include <iostream>
using namespace std;

int main ()
{
  // Prompt User
  cout << "Give a number: ";
  int num; cin >> num;
  cout << "Multiples of " << num << " that are at most 100:\n";

  // Process/Output Result
  int total = 0, stop = 100 - num;
  while ( total <= stop )
	{
		total += num;
    cout << total << ' ';
	}

  cout << endl;

  return 0;
}
