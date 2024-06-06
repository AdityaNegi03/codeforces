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

    	vector<int> originalArr(n);

    	for(int i=0;i<n;i++)
    		cin>>originalArr[i];

       vector<int> foundArr(n);

         
         unordered_map<int,int> umapB;

    	 for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            foundArr[i]= temp;
            umapB[temp]++;
        }
        
    	int m;
    	cin>>m;

    	unordered_map<int,int> umapD;

        for(int i=0;i<m;i++)
        {
            int temp;
            cin>>temp;
            umapD[temp]++;
        }

        int flag=0;

        for(auto i: umapD)
        {
            if(i.second> umapB[i.first] && (find(foundArr.begin(),foundArr.end(), i.first) == foundArr.end()) && foundArr[n-1] == i.second)
            {
                 flag=1;
                 break;
            }

            umapB.erase(i.first);
        }

        if(flag || umapB.size())
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    	

    }
	return 0;
}