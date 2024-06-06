#include <bits/stdc++.h>

using namespace std;

int main()
{
	int test=0;
	cin>>test;

	while(test--)
	{
     int n,f,k;

     cin>>n>>f>>k;

     vector<int> arr(n);

     for(int i=0;i<n;i++)
        cin>>arr[i];

      int num = arr[f-1];

      sort(arr.begin(),arr.end(), greater<int>());
       int indfirst=0;
      int indlast=0;
      for(int i=n-1;i>=0;i--)
      {
        if(arr[i] == num)
        {
         indlast=i;
         break;
        }
      }

      for(int i=0;i<n;i++)
      {
        if(arr[i] == num)
        {
         indfirst=i;
         break;
        }
      }
      indfirst++;
      indlast++;

      if(indlast<=k && indfirst<=k)
      {
        cout<<"YES"<<endl;
      }
      else if(indlast>k && indfirst>k)
      {
        cout<<"NO"<<endl;
      }
      else{
        cout<<"MAYBE"<<endl;
      }

     

    }

	return 0;
}