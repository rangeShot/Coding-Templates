/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 

// #include <vector>
// #include <set>
// #include <map>
// #include <string>
// #include <cstdio>
// #include <cstdlib>
// #include <climits>
// #include <utility>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <iomanip>

#include<bits/stdc++.h>
using namespace std;
#define int int_fast64_t
typedef long long ll;
typedef long double db;

#define pb push_back
#define len(a) a.size()
#define sq(a) ((a)*(a))
#define cb(a) ((a)*(a)*(a))
#define tits(a) ((int)log2(a)+1)
#define seits(a) __builtin_popcount(a)
#define maxx numeric_limits<int>::max();
ll cil(ll a,ll b) {return ((a==0)?0LL:((((a)-1)/(b))+1));}
#define ignor cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define arr(a,n) ll a[n];for(ll i=0;i<(n);++i)in>>a[i]
#define rep(i,n) for(ll i=0;i<(n);++i)
#define init int t;in>>t;while(t--)
#define inn(a) ll a;in>>a

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




class rs119574 {

public:

	void pre(){

		return;
	}

    void solve(std::istream& in, std::ostream& out) {
    	pre();
    	//code







    }
};

void solve(std::istream& in, std::ostream& out)
{
    out << std::setprecision(12);
    rs119574 solution;
    solution.solve(in, out);
}


#include <fstream>
#include <iostream>


signed main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    istream& in = cin;


    ostream& out = cout;

    solve(in, out);
    // fflush(stdout);
    return 0;
}

