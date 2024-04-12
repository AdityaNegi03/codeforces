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
         
         if(n%2!=0)
            cout<<"NO"<<endl;

         else{
            cout<<"YES"<<endl;
             if(n==2)
             {
               cout<<"AA"<<endl;
             }
            else{
                
               string temp= "AABB";

               while(temp.size()<n)
               {
                  temp=temp+temp;
               }

               cout<<temp.substr(0, n)<<endl;

            
            }
            
         }
    }
	return 0;
}