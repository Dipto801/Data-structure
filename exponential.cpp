ll mod=998244353;
ll res(ll base,ll n){
   ll ans=1;
   while(n){
    if(n%2) ans=(ans*base)%mod;
    base=(base*base)%mod;
    n/=2;
   }
   return ans;
}