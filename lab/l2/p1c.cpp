#include <iostream>
using namespace std;

int exp (int a)
{
	int num=1;
	for (int b=0;b<a;b++)
	{
    num *= 2;
	}
  return num;
}

int main ()
{
  string a;
	cout<<"Enter a 4-bit binary number: ";cin>>a;
  int l=a.length();int res=0;
  for(int b=0;b<l;b++)
	{
		res += int(a[b])*exp(a.length()-b);
	}

  cout<<res;
  
	return 0;
}
