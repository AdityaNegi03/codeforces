#include <bits/stdc++.h>

using namespace std;

int main()
{

	int test=0;
	cin>>test;

	 while(test--)
	 {
	 	int n,a,b;
	 	cin>>n>>a>>b;

	 	int minburles = INT_MAX;

	 	if(n%2==0)
	 	{
	 		minburles= min(n* a, (n/2)*b);
	 	}
	 	else{
	 		minburles = min( n* a, (n/2)*b +a);
	 	}

	 	cout<<minburles<<endl;
	 }
}