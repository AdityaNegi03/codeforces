#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test=0;
    cin>>test;

     while(test--)
     {
     	
       int n,m;

       cin>>n>>m;

       string x,s;
       cin>>x;
       cin>>s;

       int counter=0;

        for(int i=1;i<=5;i++)
        {
         if(x.find(s)!=-1)
         {
            break;
         }
         x=x+x;
         counter++;
        }

        if(x.find(s)==-1)
         cout<<-1<<endl;
      else
        cout<<counter<<endl;

     }

	return 0;
}