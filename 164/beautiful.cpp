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

       vector<int> vrr(n);
       unordered_map<int,int> umap;
       for(int i=0;i<n;i++)
       {
         cin>>vrr[i];
          umap[vrr[i]]++;
        }

        if(umap.size()==1)
         {
            cout<<-1<<endl;
            continue;
         }

        int x= vrr[0];
        int i=0;
        int ans=n;

        for(int p=0;p<n;p++)
        {
         if(vrr[p]== vrr[0])
         {
            i++;

         }
         else{
            ans= min(ans,i);
            i=0;
         }
        }
      ans=min(ans,i);

      cout<<ans<<endl;
    }
	return 0;
}