#include <bits/stdc++.h>

using namespace std;

int main()
{
	int test;
	cin>>test;

	 while(test--)
	 {

	 	int n,x;

	 	cin>>n>>x;

	 	int minfuel;
        vector<int> dist(n);
        
        for(int i=0;i<n;i++)
           {
           	cin>>dist[i];
           }

           minfuel= dist[0];

        
        for(int i=1;i<n;i++)
        {
        	minfuel= max(minfuel, dist[i]- dist[i-1]);

        }

        minfuel = max(minfuel, 2*( x-dist[n-1]));

        cout<<minfuel<<endl;
	 	  
	 }
	return 0;
}