#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test=0;
    cin>>test;

     while(test--)
     {
     	 int n;
       cin>>n;
       int counter=0;
       for(int i=0;i<n-1;i++)
          {
            int c;
            cin>>c;

            counter+=c;
          }

          cout<<(-1*counter)<<endl;
     	      }

	return 0;
}