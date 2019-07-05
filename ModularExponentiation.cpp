/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1e9+7;


ll power(ll x, ll n){
	if(n==0) 
		return 1;
	ll pHalf = power(x, n/2);
	
	if(n%2==0)
		return (pHalf*pHalf)%mod;
	else
		return (x*((pHalf*pHalf)%mod))%mod;
}




//more fast but range is short

ll power(ll x,ll n){
	
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return power((x*x)%mod,n/2,mod);
    else                             //n is odd
        return (x*power((x*x)%mod,(n-1)/2,mod))%mod;

}