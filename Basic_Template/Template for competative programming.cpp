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
// #include <fstream>
// #include <iostream>

#include<bits/stdc++.h>
using namespace std;
#define int int_fast64_t
typedef long long ll
;typedef long double db;


//for fast scanning
template<typename T> void in(T &x) { 
    x = 0; 
    bool neg = 0; 
    register T c = getchar(); 
    if (c == '-') neg = 1, c = getchar(); 
    while ((c < 48) || (c > 57)) c = getchar(); 
    for ( ; c < 48||c > 57 ; c = getchar()); 
    for ( ; c > 47 && c < 58; c = getchar() ) 
        x= (x << 3) + ( x << 1 ) + ( c & 15 ); 
    if (neg) x *= -1; 
} 
  
//for fast printing 
template<typename T> void out(T n) { 
    bool neg = 0; 
    if (n < 0) 
        n *= -1, neg = 1; 
    char snum[65]; 
    int i = 0; 
    do{ 
        snum[i++] = n % 10 + '0'; 
        n /= 10; 
    } 
    while (n); 
    --i; 
    if (neg) putchar('-'); 
    while (i >= 0) putchar(snum[i--]); 
    putchar('\n'); 
} 

void fastscan(int &number) { 
    //variable to indicate sign of input number 
    bool negative = false; 
    register int c; 
    number = 0; 
    // extract current character from buffer 
    c = getchar(); 
    if (c=='-') { 
        // number is negative 
        negative = true; 
        // extract the next character from the buffer 
        c = getchar(); 
    } 
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
    // if scanned input has a negative sign, negate the 
    // value of the input number 
    if (negative) 
        number *= -1; 
} 


//for printing a list of values of same data-type
template<typename T>
void print(std::initializer_list<T> text) { 
    for (const auto & value: text) 
        std::cout << value << " "; 
}

//use amax(mx,i) instead of mx=max(mx,i) 
template<typename T, typename U> 
static inline void amin(T &x, U y) { 
    if (y < x) x = y; 
} 
//use amin(mn,i) instead of mn=min(mn,i) 
template<typename T, typename U> 
static inline void amax(T &x, U y) { 
    if (x < y) x = y; 
} 

/*
v1.resize(col,vector<int>(row));
bool present=binary_search(v.v.begin(), v.end(),val);   //O(log(n))
std::vector<int> :: iterator it1=lower_bound(v.v.begin(), v.end(),val); // >=
auto  it2=upper_bound(v.v.begin(), v.end(),val);    // >
int count=it2-it1;
set<pair<int,int>>::iterator it=s.upper_bound({point,INT_MAX});
if(it==s.begin())cout<<"not contained in any interval";
it--;
pair<int,int> current=*it;
if(current.first<=point && point<=current.second())cout<<"yes! its present";
else cout<<"its not present";
pop = __builtin_popcount(num);Number of one's in num
parity = __builtin_parity(num); Parity of num
clz = __builtin_clz(num); Number of leading zero's in num
clz = __builtin_clz(-num);Number of leading zero's in num(only for unassigned value)
ctz = __builtin_ctz(num); Number of trailing zero's in num
memset(arr, 0, sizeof(arr[0][0]) * m * n);
*/

#define F first
#define S second
#define pb emplace_back
#define len(a) a.size()
#define sq(a) ((a)*(a))
#define cb(a) ((a)*(a)*(a))
#define SORT(v) sort(ALL(v)) 
#define tits(a) ((int)log2(a)+1)
#define PERMUTE next_permutation 
#define seits(a) __builtin_popcount(a)
#define maxx numeric_limits<int>::max();
ll cil(ll a,ll b) {return ((a==0)?0LL:((((a)-1)/(b))+1));}
#define ignor cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,k,n) for (i = k; i <= n; ++i) 
#define REPR(i,k,n) for (i = k; i >= n; --i)
#define arr(a,n) ll a[n];rep(i,n)in(a[i])
#define de(i) cout<<"hi "<<i<<endl;
#define endl "\n"
#define inn(a) ll a;in(a);

const ll mod=1e9+7;
const db eps=1e-9;
const double pi=acos(-1);
#define inf 0x3f3f3f3f
ll i,j,k;




void solve(){
    //code...
    
    

    
    
return;
}
#define TEST COMMENT

signed main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
    #endif

    
    ll t=1,jj=0;
    #ifdef TEST
    in(t);
    #endif
    #ifdef TEST
    while(t--){
        cout<<"TEST "<<++jj<<endl;
    #endif
    solve();
    #ifdef TEST  
    
        cout<<endl;
    }
    #endif
     #ifndef ONLINE_JUDGE
    cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
    #endif 

    
    fflush(stdout);
    return 0;
}

