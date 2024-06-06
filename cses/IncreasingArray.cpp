#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int max=-1;

    long long ans=0;

    for(int i=0;i<n;i++)
    {
      int temp;
      cin>>temp;

      if(max==-1)
      {
      	max=temp;
      }
      else{
      	if(temp>=max)
      	{
      		max=temp;
      		continue;
      	}
      	else{
           ans+= abs(temp-max);
     
      	}
      }
    }

    cout<<ans<<endl;


	return 0;
}