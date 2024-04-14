#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test=0;
    cin>>test;

     while(test--)
     {
      int n, k;

      cin>>n>>k;



      string s;

      cin>>s;
      
    
      unordered_map<char,int> umap;

      for(char ch: s)
        umap[ch]++;
      
      int countodd=0;

      for(auto i: umap)
      {
        if(i.second%2!=0)
            countodd++;
      }

      if(countodd>k+1)
      {
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }

      




     }
	return 0;
}