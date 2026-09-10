// Joshua Downes m291920
#include <iostream>
using namespace std;

int main()
{
  // Prompt User
  int num; char op;
  cout << "Enter an expression: "; cin >> num >> op;

  // Processing
  int total = num;
  while ( op != '=' )
  {
    cin >> num;
    if ( op == '+' ) { total += num; }
    else if ( op == '-' ) { total -= num; }
    else if ( op == '/' ) { total /= num; }
    else if ( op == '*' ) { total *= num; }
    cin >> op;
  }

  // Output Result
  cout << total << endl;

  return 0;
}
