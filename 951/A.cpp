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

     	vector<int> vcc(n);

     	for(int &x: vcc)
     		cin>>x;

     	

     	int maxnum=INT_MIN;
        int minnum=INT_MAX;
     	for(int i=1;i<n;i++)
     	{
     		maxnum= max(vcc[i-1],vcc[i]);
     		minnum= min(minnum,maxnum);

     	
     	}

       cout<<minnum-1<<endl;

     }
	return 0;
}