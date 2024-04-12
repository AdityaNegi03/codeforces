#include <bits/stdc++.h>

using namespace std;

int main()
{
   int test=0;
   cin>>test;

    while(test--)
    {
    	int n;
      cin>>n;

      vector<int> vcc(n);
     
      for(int i=1;i<n-1;i++)
      {
          if(vcc[i-1]<= vcc[i+1] && (vcc[i]>= 2* vcc[i-1]))
          {
            vcc[i+1]-=vcc[i-1] ;
            vcc[i]-=2*vcc[i-1];
            vcc[i-1]=0;
          }
       }
         
         if(accumulate(vcc.begin(),vcc.end(),0)!=0)
         cout<<"NO"<<endl;

        else{
         cout<<"YES"<<endl;
        }
        
    }
	return 0;
}