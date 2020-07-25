#include <bits/stdc++.h>
using namespace std;
#define int long long
int f(vector<int> v, int n, int b)
    {
        int sum=0;
        for(int i=0; i<n; i++)
           {
               sum=sum+v.at(i);
               if(sum>b) return i;
           }
        return n;
    }
int32_t main()
   {
       int t;
       cin>>t;
       for(int j=0; j<t; j++)
         {
             int n,b;
             cin>>n>>b;
             vector<int> v;
             for(int i=0; i<n; i++)
                 {
                     int a;
                     cin>>a;
                     v.push_back(a);
                 }
             sort(v.begin(), v.end());
             cout<<"Case #"<<j+1<<": "<<f(v,n,b)<<endl;
         }
   }
