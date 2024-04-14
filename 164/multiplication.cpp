#include<bits/stdc++.h>

using namespace std;


int main()
{
	int test=0;

	cin>>test;

	while(test--)
	{


		string x,y;

		cin>>x;
		cin>>y;

		int n=x.size();

		for(int i=0;i<n;i++)
		{
            if(x[i]==y[i])
            	continue;

			if(x[i]>y[i])
			{

			}
			else{
                swap(x[i], y[i]);
			}

			for(int j=i+1;j<n;j++)
			{
				if(x[j]<y[j])
				{

				}
				else{
					swap(x[j],y[j]);
				}
			}

			break;
		}
		    cout<<x<<endl;
			cout<<y<<endl;
	}
}