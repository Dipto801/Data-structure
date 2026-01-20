#include<bits/stdc++.h>
#define dipto ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
#define yes             cout<<"YES"<<'\n';
#define no              cout<<"NO"<<'\n';
#define gcd(x,y)        __gcd(x,y)
#define lcm(x,y)        y*x/__gcd(x,y)
#define pb              push_back
#define nextp(x)        next_permutation(x.begin(),x.end())
#define all(ar)         ar.begin(), ar.end()
#define rall(ar)        ar.rbegin(), ar.rend()
#define Unique(x)       x.erase(unique(all(x)), x.end());
#define MAX(x)          *max_element(all(x));
#define MIN(x)          *min_element(all(x));
#define SUM(a)          accumulate(all(a),0LL);
#define fixpoint(x)     cout<<fixed<<setprecision(x)
#define clz(x)          __builtin_clz(x) // count leading zeros of 32 bits.
                                         //like 4=00000000....100(leading 29 ta)
#define ctz(x)          __builtin_ctz(x) //count trailing zeros                                         
#define popcount(x)     __builtin_popcount(x)    //count number of ones's(bits)

#define vll             vector<ll>
#define F               first
#define S               second
#define cinv(v)         for(auto& i:v)cin>>i;
#define coutv(v)        for(auto& i:v)cout<<i<<' ';

//int dx[]={-1,+1,0,0}; //[Grid move's]
//int dy[]={0,0,-1,+1};

using namespace std;
typedef long long ll;

void solve()
{
    ll n,q;  cin>>n>>q;
    vll v(n+1);
    for(ll i=1;i<=n;i++) cin>>v[i];
    ll x[n+1],y[n+1];
    ll cnt[n+2]; // kon index maximum times ber korar way
    for(ll i=1;i<=q;i++){
      cin>>x[i]>>y[i];
      cnt[x[i]]++; cnt[y[i]+1]--;
    }
    for(ll i=1;i<=n;i++) cnt[i]+=cnt[i-1];
}
int main()
{
    dipto
    ll test=1;cin>>test;
    while(test--)
    {
      solve();
    }
}


