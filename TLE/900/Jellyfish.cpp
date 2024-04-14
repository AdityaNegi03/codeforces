#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test=0;
    cin>>test;

     while(test--)
     {
       long long a,b,n;
       cin>>a>>b>>n;

     long long sum=b;



       for(int i=0;i<n;i++)
       {
        long long x;
        cin>>x;

        sum+=  min(a-1,x);

       }

       cout<<sum<<endl;



     }
	return 0;
}