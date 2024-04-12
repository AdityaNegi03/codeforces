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
      
      vector<int> arr(n);

      for(int i=0;i<n;i++)
         cin>>arr[i];

      int flag=0;

      for(int i=n-2;i>=0;i--)
      {
         if(arr[i+1]>=arr[i])
            continue;

         if(arr[i]<10)
         {
            flag=1;
            break;
         }

         int temp = arr[i];

         int z= temp%10;

         temp=temp/10;

         if(arr[i+1]>=z&& temp<=z)
         {
            arr[i]=temp;
         }

         else{
            flag=1;
            break;
         }


      }

     if(flag)
      cout<<"NO"<<endl;
     else 
     cout<<"YES"<<endl;
     
      

    }
	return 0;
}