template <class l>
l power(l x, l y){
if(y==0)
	return 1;
l pHalf = power(x, y/2);
if(y%2==0)
	return (pHalf*pHalf)%mod;
return (x*((pHalf*pHalf)%mod))%mod;
}


//more fast but range is short
