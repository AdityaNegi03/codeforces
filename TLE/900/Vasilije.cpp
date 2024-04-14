#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test=0;
    cin>>test;

     while(test--)
     {
       long long n,k,x;

       cin>>n>>k>>x;


       long long minisum = (k*(k+1))/2;

        long long  maxsum= ((n*(n+1))/2) - (((n-k)*(n-k+1))/2);


      

      if(x>=minisum && x<= maxsum)
      {
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }




     }
	return 0;
}