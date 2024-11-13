#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) (v).begin(),(v).end()

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        // Time complexity : O(n^3)//
        /*
        ll best=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                ll sum=0;
                for(int k=i;k<=j;k++)
                {
                    sum+=v[k];
                }
                best=max(best,sum);
            }
        }
        cout<<best<<endl;
        */
       // Time complexity : O(n^2)
       /*
       ll best=0;
       for(int i=0;i<n;i++)
       {
        ll sum =0;
        for(int j=i;j<n;j++)
        {
            sum+=v[j];
            best=max(best,sum);
        }
       }
       cout<<best<<endl;
       */
      // Time complexity : O(n)
      ll best=0,sum=0;
      for(int i=0;i<n;i++)
      {
         sum = max(v[i],sum+v[i]);
         best=max(best,sum);
      }
      cout<<best<<endl;

      // Kadan's Algorithm
       
        
        
    }
}
