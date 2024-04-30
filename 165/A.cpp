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

      vector<int> p(n);

      for(int i=0;i<n;i++)
      {
      	cin>>p[i];
      }

      int flag=0;

      for(int i=1;i<=n;i++)
      {
      	int T= p[i-1];

      	if(p[T-1]==i)
      	{
      		flag=1;
      		break;
      	}
      }

      if(flag)
      {
      	cout<<2<<endl;
      }
      else{
      	cout<<3<<endl;
      }

	}

	return 0;
}