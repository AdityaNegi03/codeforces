#include<bits/stdc++.h>

using namespace std;

int main()
{
     int N;
    cin>>N;
    vector<int> A(N);

    for(int i=0;i<N;i++)
       cin>>A[i];

   int M;
   cin>>M;
    vector<int> B(M);

    for(int i=0;i<M;i++)
       cin>>B[i];

   int L;
    cin>>L;
    set<int> C;

    for(int i=0;i<L;i++)
       {
         int temp;
         cin>>temp;

         C.insert(temp);
       }

     int Q;
     cin>>Q;
    vector<int> X(Q);

    for(int i=0;i<Q;i++)
       cin>>X[i];

    for(auto i: X)
    {
         int flag=0;

         
          for(int k=0;k<N;k++)
          {
            for(int j=0;j<M;j++)
            {
               if( C.find(i-(A[k]+B[j])) != C.end())
               {
                  flag=1;
                  break;
               }
            }
          }

          if(flag)
            cout<<"Yes"<<endl;
          else
            cout<<"No"<<endl;

    }

   return 0;
}