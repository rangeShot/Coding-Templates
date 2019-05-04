/* 
 
By:                                        
 
_ __ ___ 119574 
| '__/ __| 
| |  \__ \ 
|_|  |___/ 
 
*/ 
#include<bits/stdc++.h> 
using namespace std;
typedef long long int ll;


/* A binary tree node has data, pointer to left child
   and a pointer to right child */

struct node
{
    ll data;
    struct node* left;
    struct node* right;
    
    node(ll x){
        data = x;
        left = right = NULL;
    }
};

void construct(){
    map<ll, node*> m;
     ll n;
     scanf("%d",&n);
     struct node *root = NULL;
     while (n--)
     {
        node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = new node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = new node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
}
/*
example 1:
3
1 2 L 1 3 R 3 5 L

          1
        /   \
       2     3
            /
           5
           
example 2:
2
1 2 R 1 3 L

         1
       /   \
      3     2
      
*/
