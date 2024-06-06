#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector<int> arr={0,1,0,1,0,0,0,1,0,1,0,0};
   int n= arr.size();
   int i=0;
   int j= n-1;

   while(arr[i]!=1)
   {
   	i++;
   }

   while(arr[j]!=0)
   {
   	j--;
   }

    while(i<j)
    {
    	swap(arr[i],arr[j]);

    	i++;
    	j--;

    	while(arr[i]!=1)
   {
   	i++;
   }

   while(arr[j]!=0)
   {
   	j--;
   }
    }

     for(auto i: arr)
     	cout<<i<<" ";
	return 0;
}