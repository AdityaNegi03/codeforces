#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test=0;
    cin>>test;

     while(test--)
     {
     	int n=0;
      cin>>n;
      vector<int> arr(n);
      
   unordered_map<int,int> umap;
      for(int i=0;i<n;i++)
      {
         cin>>arr[i];
         umap[arr[i]]++;
      }

      if(n==2)
      {
         cout<<"YES"<<endl;
         continue;
      }
if(umap.size()==1)
      {
         cout<<"YES"<<endl;
         continue;
      }

      if(umap.size()>2)
      {
         cout<<"NO"<<endl;
         continue;
      }


      int a=-1;
      int b=-1;

      for(auto i: umap)
      {
         if(a==-1)
         {
            a=i.first;
            b=i.second;
         }
         else{
            if(n%2==0 && i.second != b)
            {
               cout<<"NO"<<endl;
            }
            else if(n%2==0 && i.second == b)
            {
               cout<<"YES"<<endl;
            }
            else if(n%2!=0 && abs(i.second - b)!=1 )
            {
               cout<<"NO"<<endl;
            }
            else{
               cout<<"YES"<<endl;
            }
         }
      }



     	      }

	return 0;
}