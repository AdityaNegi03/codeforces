#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int maxlen=1;
    int curr=1;
    for(int i=1;i<s.size();i++)
    {
    	if(s[i]==s[i-1])
    	{
    		curr++;
    	}
    	else{
    		maxlen=max(maxlen,curr);
    		curr=1;
    	}
    }
    maxlen=max(maxlen,curr);

    cout<<maxlen<<endl;
	return 0;
}