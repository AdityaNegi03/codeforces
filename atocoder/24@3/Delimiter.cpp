#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr;
	 int num;

	 while(cin>>num)
	 {
	 	arr.push_back(num);


	 }

	  for(int i=arr.size()-1;i>=0;i--)
	  	cout<<arr[i]<<endl;
	return 0;
}