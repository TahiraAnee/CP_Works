//The above code works well for n upto the order of 10^7. Beyond this we will face memory issues.
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) (v).begin(),(v).end()
//Calculating smallest prime factor(SPF) for every number till MAXN

#define MAXN 100001
vector<int> spf(MAXN + 1, 1);

// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
    // stores smallest prime factor for every number

    spf[0] = 0;
    for (int i = 2; i <= MAXN; i++) {
        if (spf[i] == 1) { // if the number is prime ,mark
                           // all its multiples who havent
                           // gotten their spf yet
            for (int j = i; j <= MAXN; j += i) {
                if (spf[j]== 1) // if its smallest prime factor is
                          // 1 means its spf hasnt been
                          // found yet so change it to i
                    spf[j] = i;
            }
        }
    }
}
//A O(log n) function returning primefactorization
//by diving by smallest prime factor at every step
vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1) {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        // precalculating samllest prime factor
        sieve();
        int x=12246;
        cout<<"Prime factorization for "<<x<<" : ";
        vector<int>p=getFactorization(x);
        for(auto u:p)cout<<u<<" ";
        cout<<endl;
        
    }
}