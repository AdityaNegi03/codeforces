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

        vector<int> org(n);

        for(int& x: org)
            cin>>x;

        map<int,int> fnd;
        map<int,int> dm;

        vector<int> found(n);
          for(int& x: found) cin>>x, fnd[x]++;

        int m;
       cin>>m;
       int last=-1;

       for(int i=0;i<m;i++)
       {
           cin>>last;
           dm[last]++;
       }

       

    }
	return 0;
}