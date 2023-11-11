//Program for Addition of two matrices:

#include<iostream>
using namespace std;
int main()
{
	int rows, columns;
	
	cout<<"For Addition of two matrices the order or dimention of the matrices must be same."<<endl;
	cout<<"Enter the rows of matrices: ";
	cin>>rows;
	cout<<"Enter the columns of matrices: ";
    cin>>columns;
    
	int mat1[rows][columns], mat2[rows][columns], sum_mat[rows][columns];
	
	//taking elements for matrix1:
	
    cout<<"Enter Elements of First Matrix: "<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
        	cout<<"Enter value for element ("<<i+1<<","<<j+1<<"): ";
        	cin>>mat1[i][j];
		}
    }
    
    //taking elements for matrix2:
    
    cout<<"Enter Elements of Second Matrix: "<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
        	cout<<"Enter value for element ("<<i+1<<","<<j+1<<"): ";
        	cin>>mat2[i][j];
		}
    }
    
    cout<<"\nAdding the Two Given Matrix...\n";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++) sum_mat[i][j] = mat1[i][j]+mat2[i][j];
    }
    
    //loop for printing the array: 
    
	cout<<"Addition Result of Two Given Matrix is:\n";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
		{
			cout<<sum_mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
