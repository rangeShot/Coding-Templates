ll power(ll x, ll y){
if(y==0) 
return 1;
ll pHalf = power(x, y/2);
if(y%2==0)
return (pHalf*pHalf)%mod;
return (x*((pHalf*pHalf)%mod))%mod;
}
