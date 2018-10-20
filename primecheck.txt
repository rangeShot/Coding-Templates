/*
by:-  
                     _ __ ___ 119574
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 





bool isp(ll n){
    
    if(n < 2)	return false;
    
    if(n==2 || n==3)    return true;
    
    if(n%2==0 || n%3==0)    return false;
    
    for(ll i=5;i*i<=n;i+=4){
        if(n%i==0)return false;
        i+=2;
        if(n%i==0)return false;
    }
    
    return true;
}








