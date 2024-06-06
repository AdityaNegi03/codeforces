#include <bits/stdc++.h>

using namespace std;

int main()
{
	int test=0;
	cin>>test;

	while(test--)
	{
      int n,m;
      cin>>n>>m;

      string str;
      cin>>str;

      vector<int> prob(7,0);

       for(char ch: str)
       {
       	 prob[ch-'A']++;
       }

       int ans=0;

       for(auto i: prob)
       {
       	 ans+= max(0,m-i);
       }

       cout<<ans<<endl;
	}

	return 0;
}