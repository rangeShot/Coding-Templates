#include<iostream>

using namespace std;
int main(){
	int rows,cols;
	cin>>rows>>cols;

	//to declare the matrix
	
	int** matrix = new int*[rows];
	for (int i = 0; i < rows; ++i)
	    matrix[i] = new int[cols];
	
	
	//to delete the matrix
	
	for (int i = 0; i < rows; ++i)
	    delete [] matrix[i];
	delete [] matrix;
 
return 0;
}
