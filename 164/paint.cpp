#include <bits/stdc++.h>

using namespace std;

int main()
{
   int test=0;
   cin>>test;

    while(test--)
    {
    	int n,m,k;
      cin>>n>>m>>k;

      // if(k>=n)
      //    cout<<"NO"<<endl;
      // else if(k>=m)
      //    cout<<"NO"<<endl;
      // else{
         int temp = (n/m) ;
         if(n%m>0)
         {
            temp++;
         }

         int z= n- temp;
         
         // cout<<temp<<endl;
         // cout<<z<<endl;
         if(k>=z)
         {
            cout<<"NO"<<endl;
         }
         else
            cout<<"YES"<<endl;
      // }

    }
	return 0;
}