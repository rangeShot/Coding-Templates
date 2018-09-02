/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 









long long int srch(long long int a[], long long int l, long long int r, long long int x) { 
    while (l <= r) { 
        long long int m = l + (r-l)/2; 
        if (a[m] == x) 
            return m; 
        if (a[m] < x) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
    return -1; 
} 









