/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int row, col;
    cin>>row>>col;
    
    
    
    //method 1
    vector <vector<int>> v1;
    v1.resize(col,vector<int>(row));
    
    
    
    //method 2
    vector <vector <int> > v2(row);
    for(int i=0,cnt=1 ; i<row ; i++){
        v2[i]=vector<int> (col);
    }
    
    
    
    //method 3
    int** v3 = new int*[rows];
	for (int i = 0; i < rows; ++i){
	    v3[i] = new int[cols];
	}
	    

    
    for (int i=0;i<rows;++i){
	    delete [] v3[i];
    }
	delete [] v3;
    
    
    return 0;
}
