#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test=0;
    cin>>test;

     while(test--)
     {
     	int n=0;
      cin>>n;

         if(((n-1)%3) ==0 || ((n+1) %3)==0)
            cout<<"First"<<endl;
         else
            cout<<"Second"<<endl;

     	      }

	return 0;
}