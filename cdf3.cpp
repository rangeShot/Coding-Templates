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
ll cil(ll a,ll b) {return ((a==0)?0LL:(((a-1)/b)+1));}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,j,n,f,k,s=0;
    cin>>t;
    while(t--){
        cin>>n;
        vector< pair<ll,ll> > p(n);
        map<ll,ll> mp;
        ll mn=9999999999,mx=-1;
        
        for(ll i=0;i<n;i++){
            cin>>p[i].first>>p[i].second;
            mp[p[i].first]++;
            mp[p[i].second]++;
            mx=max(mx,p[i].second);
            mn=min(mn,p[i].first);
        }
        ll s=mx-mn;
        // cout<<s<<endl;
        if(s>0){
            pair<ll,ll> pp[s+1];
            for(ll i=0;i<=s;i++){
                pp[i].first=0;
                pp[i].second=mn+i;
                // cout<<pp[i].second<<' ';
            }
            for(auto i:p){
                if(i.first!=i.second){
                    pp[i.first-mn].first++;
                    if(i.second<mx)pp[i.second+1-mn].first--;
                    // pp[i.second-mn].first--;
                }
            }
                
            for(ll i=1;i<=s;i++){
                pp[i].first+=pp[i-1].first;
            }
            
            // for(ll i=0;i<=s;i++)
            //     cout<<pp[i].first<<' ';
            //     cout<<endl;
                
            sort(pp,pp+s+1);
            ll kk=-1;
                for(ll i=0;i<=s;i++){
                    ll sse=pp[i].first;
                    if(sse<=mp[sse]){
                        // cout<<"hi";
                        kk=pp[i].second;
                        break;
                    }
                    
                }
            //   cout<<kk<<endl;
                
            if(kk!=-1){
                
                ll sss=mn+kk;
                for(auto i:p){
                    if(i.second>sss)cout<<2<<' ';
                    else cout<<1<<' ';
                }
                cout<<endl;
            }
            else cout<<-1<<endl;
        }
        else cout<<-1<<endl;
        
        
    }
    return 0;
}
    
    
    