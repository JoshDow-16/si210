// Joshua Downes m291920
#include <iostream>
using namespace std;

int main ()
{
  // Prompt User and Grab Input
  int per;
	cout << "Permissions: "; cin >> per;

  // Process Number
  int u = per/100,ures = 0;
  if ( (u-4) >= 0 ) { u -= 4;ures += 100; }
  if ( (u-2) >= 0 ) { u -= 2;ures += 10; }
  if ( (u-1) >= 0 ) { ures += 1; }

  int g = per%100/10,gres = 0;
  if ( (g-4) >= 0 ) { g -= 4;gres += 100; }
  if ( (g-2) >= 0 ) { g -= 2;gres += 10; }
  if ( (g-1) >= 0 ) { gres += 1; }

  int o = per%10,ores = 0;
  if ( (o-4) >= 0 ) { o -= 4;ores += 100; }
  if ( (o-2) >= 0 ) { o -= 2;ores += 10; }
  if ( (o-1) >= 0 ) { ores += 1; }

	// Output Result
	cout << "\nUser:\n"\
          "read    "<<ures/100<<"\n"\
					"write   "<<ures%100/10<<"\n"\
					"execute "<<ures%10<<"\n\n"\
				  "Group:\n"\
          "read    "<<gres/100<<"\n"\
					"write   "<<gres%100/10<<"\n"\
					"execute "<<gres%10<<"\n\n"\
					"Other:\n"\
          "read    "<<ores/100<<"\n"\
					"write   "<<ores%100/10<<"\n"\
					"execute "<<ores%10 << endl;

	return 0;
}
