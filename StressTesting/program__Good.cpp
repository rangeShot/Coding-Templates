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
typedef long double db;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,n) for(ll i = 0; i < (ll)(n); ++i)
#define endl "\n"
const ll mod=1e9+7;
const db eps=1e-9;
const double pi=acos(-1);

bool comp(pair<ll,ll> a,pair<ll,ll> b){
    if(a.first == b.first)return a.second>b.second;
    else return a.first<b.first;
}

 void solve(){

    ll n,c;
    cin>>n>>c;
    vector<pair<ll,ll> > player(c);
    vector<pair<ll,ll> > bat(n);
    rep(i,c)cin>>player[i].first>>player[i].second;
    rep(i,n)cin>>bat[i].first>>bat[i].second;
    sort(player.begin(), player.end(),comp);
    sort(bat.begin(), bat.end(),comp);
    ll cnt1=0;
    map<ll,bool> sold;
    for(auto i:player){
        rep(j,n){
            if(sold[j])continue;
            else{
                if(bat[j].first>i.first && bat[j].second<=i.second){
                    sold[j]=1;
                    cnt1++;
                    // cout<<i.first<<' '<<i.second<<" bought "
                    // <<bat[j].first<<' '<<bat[j].second<<endl;
                    break;
                }
            }
        }
    }
    

    cout<<cnt1<<endl;


    return;
}
signed main(){
    IOS;
    ll t=1;
    // cin>>t;
    while(t--)solve();
fflush(stdout);return 0;
}
