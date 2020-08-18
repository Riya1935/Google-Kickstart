#include <bits/stdc++.h>
using namespace std;
int main()
  {
      int t;
      cin>>t;
      for(int l=1; l<=t; l++)
        {
            int n,k;
            cin>>n>>k;
            vector<int> v(n);
            for(int i=0; i<n; i++)  cin>>v[i];
            int arr[k];
            for(int i=0; i<k;i++) arr[i]=k-i;
            int cnt=0;
            for(int i=0; i<n; i++)
              {
                  int a=i,j=0;
                  while(a<n && j<k && v[a]==arr[j])
                   {
                       j++;
                       a++;
                   }
                   if(j==k) cnt++;
              }
            cout<<"Case #"<<l<<": "<<cnt<<endl;
        }
  }
