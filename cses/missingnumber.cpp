#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n;
	 cin>>n;

	 long long temp = (n*(n+1))/2;

	 long long sum=0;

	 for(int i=0;i<n-1;i++)
	 {
       int t;
       cin>>t;
       sum+=t;
	 }

	 cout<<temp-sum<<endl;

	 return 0;
}