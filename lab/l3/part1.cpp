#include <iostream>
using namespace std;

int main ()
{
	// Grab Input, First Output
  float x1, y1, x2, y2, x3, y3; char jnk;
  cin >> jnk >> x1 >> jnk >> y1 >> jnk >> jnk >> x2 >> jnk >> y2 >> jnk >> jnk >> x3 >> jnk >> y3;
  cout << x1 << ' ' << y1 << '\n' \
			 << x2 << ' ' << y2 << '\n' \
			 << x3 << ' ' << y3 << '\n' \
			 << x1 << ' ' << y1 << "\n\n";

	// Process Points
  float high_x, low_x;
	high_x = x1;
	if ( x2 > high_x ) { high_x = x2; }
	if ( x3 > high_x ) { high_x = x3; }

	low_x = x1;
	if ( x2 < low_x ) { low_x = x2; }
	if ( x3 < low_x ) { low_x = x3; }

	float high_y, low_y;
	high_y = y1;
	if ( y2 > high_y ) { high_y = y2; }
	if ( y3 > high_y ) { high_y = y3; }

	low_y = y1;
	if ( y2 < low_y ) { low_y = y2; }
	if ( y3 < low_y ) { low_y = y3; }

	// Second Output
	cout << low_x << ' ' << low_y << '\n' \
			 << low_x << ' ' << high_y << '\n' \
			 << high_x << ' ' << high_y << '\n' \
			 << high_x << ' ' << low_y << '\n' \
			 << low_x << ' ' << low_y << endl;

  return 0;
}
