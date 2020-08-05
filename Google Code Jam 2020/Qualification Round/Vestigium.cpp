#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define pb push_back
#define fi0(i,n) for(int i=0; i<n; i++)
#define fi1(i,n) for(int i=1; i<n; i++)
#define fll0(i,n) for(long long i=0; i<n; i++)
#define fll1(i,n) for(long long i=1; i<n; i++)
#define vll vector<long long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
int main()
  {
      ll t;
      cin>>t;
      for(ll m=1; m<=t; m++)
        {
            ll n;
            cin>>n;
            ll arr[n][n];
            ll v[100]={0};
            ll trace=0,r=0,c=0;
            fll0(i,n)
             {
                 fll0(j,n)  {
                     cin>>arr[i][j];
                     v[arr[i][j]-1]++;
                     if(i==j)  trace=trace+arr[i][j];
                 }
                bool s=true;
                fll0(k,100)
                 {
                    if(v[k]>1) s=false;
                    v[k]=0;
                 }
                if(!s) r++;
             }
            fll0(i,n)
             {
                 fll0(j,n)
                  {
                      v[arr[j][i]-1]++;
                  }
                  bool s1=true;
                  fll0(k,100)
                   {
                       if(v[k]>1) s1=false;
                       v[k]=0;
                   }
                   if(!s1) c++;
             }
            cout<<"Case #"<<m<<": "<<trace<<" "<<r<<" "<<c<<endl;
        }
  }
