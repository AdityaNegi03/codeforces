#include <bits/stdc++.h>

using namespace std;

int main()
{
   int test=0;
   cin>>test;

    while(test--)
    {
    	int n,m,k;a

      cin>>n>>m>>k;

      vector<int> arr1(n);

      for(int i=0;i<n;i++)
         cin>>arr1[i];

      vector<int> arr2(m);

      for(int i=0;i<m;i++)
         cin>>arr2[i];

      int counter=0;

      sort(arr1.begin(),arr1.end());

      sort(arr2.begin(),arr2.end());

      for(int i=0;i<n;i++)
      {
         for(int j=0;j<m;j++)
         {
            if(arr1[i]+ arr2[j] <=k)
               counter++;
         }
      }
       
       cout<<counter<<endl;

    }
	return 0;
}