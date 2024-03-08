#include <bits/stdc++.h>

using namespace std;

int main()
{
   int test=0;
   cin>>test;

    while(test--)
    {
    	int n=0;
    	cin>>n;
        int i=0;
    	while(1<<i < n)
    	{
           i++;
    	}

        cout<<(1<<i)<<endl;
    }
	return 0;
}