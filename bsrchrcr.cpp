/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 









long long int srch(long long int a[], long long int l, long long int r, long long int x) { 
   if (r >= l) { 
        long long int mid = l + (r - l)/2; 
        if (arr[mid] == x)   
            return mid; 
        if (arr[mid] > x)  
            return srch(a, l, mid-1, x); 
        return srch(a, mid+1, r, x); 
   } 
   return -1; 
} 
  
  
  






