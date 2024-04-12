#include<bits/stdc++.h>

# define int long long
# define to int t;cin>>t; //t
# define no int n;cin>>n; // n
# define ar vector<int> arr(n);for(auto &it:arr){cin>>it;} //array
# define for1 for(int i=0 ;i<100 ; i++){if(i==90)break;}
# define for2 for(int i=0 ;i<100 ; i++){if(i==50)break;}
# define so string s;cin>>s;
# define str string 
# define mod 1e9+7
using namespace std;
void OptimalWayOfLPS(string s,vector<int>& lps)
{
    int n =s.size();
    int len = 0; int i=1;lps[0] = 0;
    while(i<n)
    {
        if(s[i] == s[len])
        {    len++;lps[i]=len;i++;}
        else
        {
            if(len == 0)
            {
                lps[i] = 0;
                i++;
            }
            else
            {
                len = lps[len-1];
            }
        }
    }
}
//THIS KMP FUNCTION RETURNS NO OF TIME THE PATTERn OCCURS IN A STRING OR 
//IT CAN ALSO RETURNS THE NO OF INDEXES IN THE MAIN STRING WHERE THE 
//THE PATTERN STARTS
int kmp(string pattern ,string s)
{
    vector<int> lps(pattern.size());
    OptimalWayOfLPS(pattern,lps);
    int n = s.size();
    int m = pattern.size();
    int i=0 , j=0 ;
    int ans = 0;
    while(i<n)
    {
        if(s[i] == pattern[j])
        {
            
            i++;j++;
            if(j == m)
            {
                //cout<<i-j<<"\n";
                ans++;
                j = lps[j-1];
            }
        }
        else if(i<n && s[i] != pattern[j])
        {
            if(j == 0)i++;
            else 
                j = lps[j-1];
        }
    }
    return ans;
}
int solve()
{
    no
    so
    if(n<3)
        return 0;
    int map = kmp("map",s);
    int pie = kmp("pie",s);
    int mapie = kmp("mapie",s);
    return map+pie-mapie;
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    to
    while(t--)
    {
        cout<<solve()<<"\n";
    }
    return 0 ;
}