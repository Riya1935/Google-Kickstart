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
      for(ll j=1; j<=t; j++)
        {
            ll n;
            cin>>n;
            vll v(n);
            fll0(i,n)   cin>>v[i];
            ll curr_max=-1;
            ll ans=0;
            fll0(i,n)
              {
                 if(i==0)  {
                     if(v[i]>v[i+1])  ans++;
                     curr_max=max(v[i], curr_max);
                 }
                 else if(i==n-1) {
                     if(v[i]>curr_max)  ans++;
                 }
                 else 
                   {
                      if(v[i]>curr_max)  
                        {
                         curr_max=v[i];
                         if(v[i]>v[i+1])  ans++;
                        }
                   }
              }
            cout<<"Case #"<<j<<": "<<ans<<endl;
        }
  }
