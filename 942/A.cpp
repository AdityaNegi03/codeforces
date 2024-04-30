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

       vector<int> arr(n);
       vector<int> brr(n);


       for(int i=0;i<n;i++)
       	cin>>arr[i];

       for(int i=0;i<n;i++)
       	cin>>brr[i];

       int count=0;

       for(int i=0;i<n;i++)
       {

       	if(arr[i]>brr[i])
       	{
       		arr.insert(arr.begin(), brr[i]);
       		sort(arr.begin(),arr.end());

       		arr.pop_back();
         
         count++;

       	}
       }

       cout<<count<<endl;
     }
	return 0;
}