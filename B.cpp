#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin>>T;

    while(T--)
    {
    	int n;
    	cin>>n;


    	string str1,str2;

    	cin>>str1;
    	cin>>str2;
    	string ans=""; 
    	int counter=1;

        ans= ans + str1[0];

        int i=1;
        int j=0;

        while(i<n )
        {
        	if(str1[i]< str2[j])
        	{
        		counter=1;
        		ans= ans + str1[i];
        		i++;
        		j++;
        	}
        	else if(str1[i]> str2[j])
        	{
                ans =ans+ str2[j];
                j++;
                break;
        	}
        	else{
        		ans=ans+str1[i];
        		i++;
        		j++;
        		counter++;
        	}
        }

        while(j<n)
        {
        	ans=ans+str2[j];
        	j++;
        }

        cout<<ans<<endl;
        cout<<counter<<endl;
    }
   
    return 0;
}
