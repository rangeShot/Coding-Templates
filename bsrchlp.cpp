/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 









ll srch(ll arr[], ll l, ll r, ll x) { 
    while (l <= r) { 
        ll m = l + (r-l)/2; 
        if (a[m] == x) 
            return m; 
        if (a[m] < x) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
    return -1; 
} 









