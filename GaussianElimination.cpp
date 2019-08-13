/*
by:-  
                     _ __ ___ 119574 
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 


#include<bits/stdc++.h> 
using namespace std; 








void print(vector< vector< double > > mat){
    cout<<endl;
    for(auto i:mat){
        for(auto j:i)cout<<j<<' ';cout<<endl;
    }
    cout<<endl;
}

//Source : geeksforgeeks.org

// function for elementary operation of swapping two rows 
void swap_row(vector< vector<double> > &mat, int i, int j) { 
// 	printf("Swapped rows %d and %d\n", i, j); 
	int N=mat.size();

	for (int k=0; k<=N; k++) { 
		double temp = mat[i][k]; 
		mat[i][k] = mat[j][k]; 
		mat[j][k] = temp; 
	} 
}

// function to reduce matrix to r.e.f. Returns a value to 
// indicate whether matrix is singular or not 
int forwardElim(vector< vector<double> > mat) { 
    int N=mat.size();//no of rows
	for (int k=0; k<N; k++) { 
		// Initialize maximum value and index for pivot 
		int i_max = k; 
		int v_max = mat[i_max][k]; 

		/* find greater amplitude for pivot if any */
		for (int i = k+1; i < N; i++) 
			if (abs(mat[i][k]) > v_max) 
				v_max = mat[i][k], i_max = i; 

		/* if a prinicipal diagonal element is zero, 
		that means matrix is singular,
		and will lead to a division-by-zero later. */
		if (!mat[k][i_max]) 
			return k; // Matrix is singular 

		/* Swap the greatest value row with current row */
		if (i_max != k) 
			swap_row(mat, k, i_max); 


		for (int i=k+1; i<N; i++) { 
			/* factor f to set current row kth element to 0, 
			* and subsequently remaining kth column to 0 */
			double f = mat[i][k]/mat[k][k]; 

			/* subtract fth multiple of corresponding kth 
			row element*/
			for (int j=k+1; j<=N; j++) 
				mat[i][j] -= mat[k][j]*f; 

			/* filling lower triangular matrix with zeros*/
			mat[i][k] = 0; 
		} 
	} 
	return -1; 
} 


// function to calculate the values of the unknowns 
vector<double> backSub(vector< vector<double> > mat) { 
    int N=mat.size();
	vector<double> x(N); // An vector to store solution 

	/* Start calculating from last equation up to the first */
	for (int i = N-1; i >= 0; i--) { 
		/* start with the RHS of the equation */
		x[i] = mat[i][N]; 

		/* Initialize j to i+1 since matrix is upper 
		triangular*/
		for (int j=i+1; j<N; j++) { 
			/* subtract all the lhs values 
			* except the coefficient of the variable 
			* whose value is being calculated */
			x[i] -= mat[i][j]*x[j]; 
		} 
		/* divide the RHS by the coefficient of the 
		unknown being calculated */
		x[i] = x[i]/mat[i][i]; 
	} 
	return x;
}

// function to get matrix content 
vector<double> gaussianElimination(vector< vector<double> > mat) { 
	/* reduction into r.e.f. */
	int singular_flag = forwardElim(mat); 
	
	int N=mat.size();//dimesion of matrix mat[N][n+1]

	/* if matrix is singular */
	/* A matrix is called singular matrix if det[mat]=0 and its inverse is not possible */
	if (singular_flag != -1) { 
	    vector<double> No_solution={-1};
	    
// 		printf("Singular Matrix.\n"); 

// 		/* if the RHS of equation corresponding to 
// 		zero row is 0, * system has infinitely 
// 		many solutions, else inconsistent*/
// 		if (mat[singular_flag][N]) 
// 			printf("Inconsistent System."); 
// 		else
// 			printf("May have infinitely many solutions."); 

		return No_solution; 
	} 

	/* get solution to system using backward substitution */
	return backSub(mat); 
} 









// Driver program 
int main() { 
	/* input matrix */
	vector< vector<double> > mat = {{3.0, 2.0,-4.0, 3.0}, 
						            {2.0, 3.0, 3.0, 15.0}, 
						            {5.0, -3, 1.0, 14.0} }; 

	vector< double > solution=gaussianElimination(mat); 
	for(auto i:solution)cout<<fixed<<i<<' ';cout<<endl;

	return 0; 
} 
