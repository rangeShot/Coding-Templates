/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 
#include<bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <utility>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <iomanip>
using namespace std;
typedef long long int ll;
#define db double

#define pb push_back
#define mk make_pair
#define len(a) a.size()
#define sq(a) ((a)*(a))
#define cb(a) ((a)*(a)*(a))
#define cil(a,b) (((a-1)/b)+1)
#define tits(a) ((int)log2(a)+1)
#define seits(a) __builtin_popcount(a)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ignor cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define arr(a,n) ll a[n];for(ll i=0;i<n;i++)cin>>a[i]
#define flo fflush(stdout)
#define rep(i,n) for(ll i=0;i<(n);i++)
#define init int t;cin>>t;while(t--)
#define in(a) ll a;cin>>a

/*
memset(arr, 0, sizeof(arr[0][0]) * m * n);
v1.resize(col,vector<int>(row));
bool present=binary_search(v.v.begin(), v.end(),val);	//O(log(n))
std::vector<int> :: iterator it1=lower_bound(v.v.begin(), v.end(),val);	// >=
auto  it2=upper_bound(v.v.begin(), v.end(),val);	// >
int count=it2-it1;
set<pair<int,int>>::iterator it=s.upper_bound({point,INT_MAX});
if(it==s.begin())cout<<"not contained in any interval";
it--;
pair<int,int> current=*it;
if(current.first<=point && point<=current.second())cout<<"yes! its present";
else cout<<"its not present";
*/

const ll mod=1e9+7;
const db eps=1e-9;
const double pi=acos(-1);
#define inf 0x3f3f3f3f
#define TEST 1

void pre(){
    return ;
}
int a[4]={3,5,7,11};

void solve(){
    in(n);
    ll temp=2;
    rep(i,n){
    	if(i==n-1 && (n-1)%4==0){
    		temp*=a[1];
    	}
    	else temp*=a[i%4];
    	cout<<temp<<' ';
    }
    
    cout<<endl;
    
    return;
}

// #define fpn 1
int main(){
fast;
#ifdef fpn
ifstream cin;
cin.open("inp.txt");
fstream cout;
cout.open("opt.txt");
#endif

    #ifdef TEST
    in(n);
    pre();
    rep(i,n)
    #endif
    solve();
    
return 0;
}