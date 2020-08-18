#include <bits/stdc++.h>
using namespace std;
int main()
  {
      int T;
      cin>>T;
      for(int t=1; t<=T; t++)
        {
            int n;
            cin>>n;
            vector<int> v(n);
            for(int i=0; i<n; i++)  cin>>v[i];
            int up=0, down=0, cnt=0;
            for(int i=1; i<n; i++)
               {
                   if(v[i]>v[i-1]) {up++; down=0;}
                   else if(v[i]<v[i-1]) {down++; up=0;}
                   if(up>3 || down>3) {cnt++; up=0; down=0;}
               }
            cout<<"Case #"<<t<<": "<<cnt<<endl;
        }
  }
