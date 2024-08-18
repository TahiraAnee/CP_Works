#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) (v).begin(),(v).end()

const int MAX=10000;
int prefix[MAX+1];
void build_prefix()
{
    bool prime[MAX+1];
    memset(prime,true,sizeof(prime));

    for(int i=2;i*i<=MAX;i++)
    {
        if(prime[i]==true)
        {

            for(int j=i*2;j<=MAX;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    prefix[0]=prefix[1]=0;
    for(int i=2;i<=MAX;i++)
    {
        prefix[i]=prefix[i-1];
        if(prime[i])
        {
            prefix[i]+=i;
        }
    }

}
int sum_of_range(int l,int r)
{
    build_prefix();

    return prefix[r]-prefix[l-1];
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        int l,r;
        cin>>l>>r;

        cout<<sum_of_range(l,r)<<endl;
        
    }
}