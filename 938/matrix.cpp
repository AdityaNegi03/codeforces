#include <bits/stdc++.h>

using namespace std;

int main()
{

	int test=0;
	cin>>test;

	 while(test--)
	 {
	 	int n,c,d;
	 	cin>>n>>c>>d;
        unordered_map<int,int> umap1;

	 	vector<int> vrr(n*n);

	 	for(int i=0;i<n*n;i++)
	 	{
           cin>>vrr[i];
           umap1[vrr[i]]++;
	 	}

       vector<vector<int>> square(n, vector<int>(n, 0));

      int start=INT_MAX;
      for(auto i: vrr)
      {
        start=min(start, i);
      }

       unordered_map<int,int> umap2;

    
    
     for(int i=0;i<n;i++)
     {
     	if(i==0)
     	{
     		square[i][0]= start;
     		umap2[square[i][0]]++;
     	}
     	else{
     		square[i][0]= square[i-1][0] +c;
     		umap2[square[i][0]]++;
     	}

     	for(int j=1;j<n;j++)
     	{
           square[i][j]= square[i][j-1] +d;
           umap2[square[i][j]]++;
     	}
     }

      if(umap1==umap2)
      	cout<<"YES"<<endl;
      else
      	cout<<"NO"<<endl;
    




	 	
	 }
}