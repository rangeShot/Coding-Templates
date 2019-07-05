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





//binary search using while loop

long long int srch(long long int arr[], long long int l, long long int r, long long int x) { 
    while (l <= r) { 
        long long int mid = l + (r-l)/2; 
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] < x) 
            l = mid + 1; 
        else
            r = mid - 1; 
    } 
    return -1; 
} 


//Binary Search using recursion
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









