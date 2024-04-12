#include <bits/stdc++.h>

using namespace std;


int main()
{
	string test;
	cin>>test;

    int ind1,ind2;
	  ind1 = test.find('|');

	  ind2 = test.find('|', ind1+1);

	 test.erase(ind1,ind2-ind1+1);

	 cout<<test<<endl;
	return 0;
}