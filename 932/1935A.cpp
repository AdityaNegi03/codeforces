#include <bits/stdc++.h>

using namespace std;

int main()
{
	int test=0;

	cin>>test;

	while(test--)
	{
      int n=0;
      cin>>n;

      string str;
      cin>>str;
      int len= str.size()-1;
      int i=0;

      while( i<len && str[i]==str[len])
      {
      	i++;
      	len--;
      }
         if(i>=len)
         {
         	cout<<str<<endl;
         }
         else if(str[i]<str[len])
         {
         	cout<<str<<endl;
         }
         else{
            string temp =str;

            reverse(temp.begin(),temp.end());
            temp = temp+ str;
            cout<<temp<<endl;
         }
      
	}
	return 0;
}