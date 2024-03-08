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

	 	for(int i=0;i<n;i++)
	 		 cin>>arr[i];

	 		if(arr[0]!=1)
	 			cout<<"NO"<<endl;
	 		else
	 			cout<<"YES"<<endl;

	 }
	 return 0;
}