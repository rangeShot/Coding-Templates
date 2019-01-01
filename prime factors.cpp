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



vector<ll> pfs(int n) { 
    std::vector<ll> v;
    while (n%2 == 0){ 
        v.push_back(2) ;
        n = n/2; 
    } 
    for (ll i = 3; i <= sqrt(n); i = i+2) {
        while (n%i == 0) { 
            v.push_back(i) ;
            n = n/i; 
        } 
    } 
    if (n > 2)v.push_back(n);

    return v;
    
} 




int main(){
    ll n;
    vector<ll> v;
    v=pfs(n);
    for(auto i:v)cout<<i<<' ';
    cout<<endl;
    return 0;
}