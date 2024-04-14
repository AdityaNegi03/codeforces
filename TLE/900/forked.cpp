#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test=0;
    cin>>test;

     while(test--)
     {
      int a,b;
      cin>>a>>b;

      int xk,yk;
      cin>>xk>>yk;

      int xq,yq;
      cin>>xq>>yq;

      int counter=0;

      set<pair<int,int>> st1;
      set<pair<int,int>> st2;

      st1.insert({xk+a,yk+b});
      st1.insert({xk+a,yk-b});
      st1.insert({xk-a,yk+b});
      st1.insert({xk-a,yk-b});
      st1.insert({xk+b,yk+a});
      st1.insert({xk+b,yk-a});
      st1.insert({xk-b,yk+a});
      st1.insert({xk-b,yk-a});

      st2.insert({xq+a,yq+b});
      st2.insert({xq+a,yq-b});
      st2.insert({xq-a,yq+b});
      st2.insert({xq-a,yq-b});
      st2.insert({xq+b,yq+a});
      st2.insert({xq+b,yq-a});
      st2.insert({xq-b,yq+a});
      st2.insert({xq-b,yq-a});

     for(auto i: st1)
     {
        if(st2.find(i)!= st2.end())
        {
            counter++;
        }
     }
      

     cout<<counter<<endl;

     }
	return 0;
}