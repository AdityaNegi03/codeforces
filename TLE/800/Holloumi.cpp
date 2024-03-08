#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test=0;

    cin>>test;

    while(test--)
     {
     	int n,k;
     	cin>>n>>k;

     	vector<int> vcc(n);
        int flag =0;
     	for(int  i=0;i<n;i++)
     		{
     			cin>>vcc[i];
     		}

     	vector<int>temp =vcc;

     	sort(temp.begin(),temp.end());

     	if(temp==vcc)
     		flag=1;

     	if(k>1 || flag == 1)
     		cout<<"YES"<<endl;
     	else
     		cout<<"NO"<<endl;


     }
	return 0;
}