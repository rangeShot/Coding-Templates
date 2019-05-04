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
const ll mod=(ll)1e9+7;

// A Dynamic Programming based solution to compute nCr % p 


// Returns nCr % p 

ll nCrModp(ll n, ll r) 
{
 
	// The array C is going to store last row of 
// pascal triangle at the end. And last entry of last row is nCr 
	ll C[r+1]={0}; 
	C[0] = 1;
 	// Top row of Pascal Triangle
	// One by constructs remaining rows of Pascal
	// Triangle from top to bottom 
	for (ll i = 1; i <= n; i++){
		// Fill entries of current row using previous
		// row values
		for (ll j = min(i, r); j > 0; j--)
			// nCj = (n-1)Cj + (n-1)C(j-1); 
			C[j] = (C[j] + C[j-1])%mod;
	}
	return C[r];
}





 

// Driver program 

int main() {
 
	ll n = 1000;
	ll r = 2;
	cout << "Value of nCr % mod is " << nCrModp(n, r);
	return 0;
} 
