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

       vector<int> vcc(n);

       for(int i=0;i<n;i++)
       	cin>>vcc[i];

       if(n%2!=0)
       {
        cout << "4" << '\n';
		cout << "1 " << n - 1 << '\n';
		cout << "1 " << n - 1 << '\n';
		cout << n - 1 << ' ' << n << '\n';
		cout << n - 1 << ' ' << n << '\n';
       	       }

	 
	 else {
		cout << "2" << '\n';
		cout << "1 " << n << '\n';
		cout << "1 " << n << '\n';
	}

}

return 0;
}