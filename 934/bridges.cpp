#include <bits/stdc++.h>

using namespace std;

int main()
{
   int test=0;
   cin>>test;

    while(test--)
    {
    	int n,k;
      cin>>n>>k;

     int temp = n-1;

     if(k>=temp)
      cout<<1<<endl;
     else
      cout<<n<<endl;
        
    }
     
	return 0;
}