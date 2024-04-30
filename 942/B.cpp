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
         
         string str;

         cin>>str;

         int ctr=0;

         for(auto ch: str)
         {
           if(ch=='U')
            ctr++;
         }

         if(ctr%2==0)
          cout<<"NO"<<endl;
        else
          cout<<"YES"<<endl;
     }
	return 0;
}