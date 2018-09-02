#include <iostream>
using namespace std;









int isprime(long long int n){
    int c=0;
    if((n%2==0)&&(n!=2))
        return 0;
    if((n%3==0)&&(n!=3))
        return 0; 
      long long int p=5;
    for(long long int i=0;p<=n;p=p+4){//cout<<"p="<<p<<endl;
        if((n%p==0)&&(n!=p))
            return 0;
        p+=2;
        if((n%p==0)&&(n!=p))
            return 0;
    }
return 1;
}













int main() {
	//code
	int t;
	cin>>t;
	for(int i=2 ;i<=t;i++){
		if(isprime(i)==1)
		cout<<i<<" ";
	}
return 0;
}
