#include<bits/stdc++.h>
using namespace std;
// #define int int_fast64_t


#define TEST ALL_TESTS
#define ONLINE ImONLINE

void solve(){
	// code 
	int n;cin>>n;
	cout<<n<<endl;
	
}

#if defined (ONLINE) && ! defined (ONLINE_JUDGE)  
#define ONLINE_JUDGE
#endif

signed main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	#ifdef TEST 
	int t;cin>>t;
	for(int i=1;i<=t;++i){
		cout<< "TEST " << i <<endl;
		#endif
		solve();
		#ifndef ONLINE_JUDGE
	    cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
	    #endif 
	#ifdef TEST
	    cout<<endl;}
	#endif



	return 0;
}