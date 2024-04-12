#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test=0;

    cin>>test;

     while(test--)
     {  

     	vector<vector<char>> arr(10, vector<char>(10,'.'));

     	for(int i=0;i<10;i++)
     	{
     		for(int j=0;j<10;j++)
     		{
     			cin>>arr[i][j];
     		}
     	}


     	 int left=0;
     	 int right=9;
     	 int top=0;
     	 int bottom=9;
         int counter=1;
         int ans=0;
     	 while(left<right)
     	 {
            for(int i=left;i<=right;i++)
             {
               if(arr[top][i]=='X')
               	 ans+=counter;
             }
             top++;

             for(int i=top;i<=bottom;i++)
             {
             	if(arr[i][right]=='X')
             		ans+=counter;
             }
             right--;

             for(int i=right;i>=left;i--)
             {
             	if(arr[bottom][i]=='X')
             		ans+=counter;
             }

             bottom--;

             for(int i=bottom;i>=top;i--)
             {
             	if(arr[i][left]=='X')
             		ans+=counter;
             }
             left++;


             counter++;
     	 }

     	  cout<<ans<<endl;
     }
	return 0;
}