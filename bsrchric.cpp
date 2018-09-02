/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 








ll srch(ll a[], ll l, ll r, ll x) { 
   if (r >= l) { 
        ll mid = l + (r - l)/2; 
        if (arr[mid] == x)   
            return mid; 
        if (arr[mid] > x)  
            return srch(a, l, mid-1, x); 
        return srch(a, mid+1, r, x); 
   } 
   return -1; 
} 
  
  
  






