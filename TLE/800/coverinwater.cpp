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

     	 string cell;

     	 cin>>cell;

     	 int ind =0;

     	 ind = cell.find("...");

     	 if(ind !=-1)
     	 {
     	 	cout<<2<<endl;

     	 	continue;
     	 }

     	 ind= cell.find('.');

     	 if(ind !=-1)
     	 {
     	 	int occ= count(cell.begin(),cell.end(), '.');

     	 	cout<<occ<<endl;

     	 	continue;
     	 }
   
        cout<<0<<endl;

     	      }

	return 0;
}