#include <bits/stdc++.h>

using namespace std;


void clearBitsInRange(int& num, int start, int end) {
    int mask = ((1 << (end - start + 1)) - 1) << start;
    mask = ~mask;
    int temp;
    num = num & mask;

}


int main()
{
	int test=0;

	cin>>test;

	while(test--)
	{
      string str;
      cin>>str;

      
      long long bits=0;
      long long ans=0;

    for(int i=0;i<str.size();i++)
    {

        if(str[i]=='1')
        {
            bits++;
        }
        else if(bits)
        {
            ans+= (bits+1);

        }


    }

    cout<<ans<<endl;
	}


	return 0;
    
}