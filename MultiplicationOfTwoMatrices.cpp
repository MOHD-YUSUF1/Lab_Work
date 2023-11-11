//Program for multiplication of two matrices:

#include<iostream>
using namespace std;
int main()
{
	int product;
	
	cout<<"What do you want scalar product or dot product of matrix : ";
	cout<<endl<<"Type 1 for scalar product or 0 for dot product : ";
	cin>>product;
    
    if(product==1)
    {
    	int k,rows,columns;
    	
    	cout<<"Enter number of rows : ";
    	cin>>rows;
    	cout<<"Enter number of columns : ";
    	cin>>columns;
    	
    	int mat1[rows][columns];
    	
    	cout<<"Enter elements of your matrix : "<<endl;
    	//loop for taking the value of elements from user:
    	for(int i=0; i<rows; i++)
    	{
        	for(int j=0; j<columns; j++)
	        {
    	    	cout<<"Enter value for element ("<<i+1<<","<<j+1<<"): ";
        		cin>>mat1[i][j];
			}
    	}
    	cout<<"Enter scalar value whome you want to multiply this matrix : ";
    	cin>>k;
    	
    	//loop for multiply the matrix:
    	for(int i=0; i<rows; i++)
    	{
    		for(int j=0; j<columns; j++)
    		{
    			mat1[i][j]*=k;
			}
		}
		
		cout<<"Here is your required matrix :"<<endl;
		// loop for printing the matrix:
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				cout<<mat1[i][j]<<"\t";
			}
			cout<<endl;
		}
	}
	
	//for dot product:
	
	else if(product==0)
	{
		cout<<endl<<"In dot multiplication of matrices, number of columns of matrix1 must be equal to number of rows of matrix2."<<endl;
		
		int rows,columns,columns2;
    	
    	cout<<"Enter number of rows of matrix1 : ";
    	cin>>rows;
    	cout<<"Enter number of columns of matrix1 or you can say that number of rows of matrix2 : ";
    	cin>>columns;
    	cout<<"Enter the columns of matrix2 : ";
    	cin>>columns2;
    	
		int mat1[rows][columns], mat2[columns][columns2], mul_mat[rows][columns2];
		
		int sum;
    	
    	//Taking the values of elements of matrix1 from user:
    	
		cout<<endl<<"Enter elements for matrix1 : "<<endl;
	    for(int i=0; i<rows; i++)
    	{
        	for(int j=0; j<columns; j++)
			{
				cout<<"Enter value for element ("<<i+1<<","<<j+1<<"): ";
        		cin>>mat1[i][j];
			}
	    }
	    
	    //number of columns of matrix1 is must be equal to number of rows of matrix2:
	    
		//Taking the values of elements of matrix2 from user:
    	cout<<"\nEnter elements for matrix2 : "<<endl;
    	for(int i=0; i<columns; i++)
	    {
    	    for(int j=0; j<columns2; j++)
    	    {
    	    	cout<<"Enter value for element ("<<i+1<<","<<j+1<<"): ";
    	    	cin>>mat2[i][j];
			}
    	}
    	
		// Multiplying two matrices...
    	for(int i=0; i<rows; i++)
	    {
	    	//these i and j loop for assign value of mul_mat:
    	    for(int j=0; j<columns2; j++)
        	{
            	sum=0;
            	
				//this loop is for multiplication:
            	
	            for(int k=0; k<columns; k++)
				{
        	    	sum += mat1[i][k] * mat2[k][j];
				}
	            mul_mat[i][j] = sum;
    	    }
	    }
    	
	    //loop for printing the required matrix:
	    cout<<"\nMultiplication Result:\n";
	    for(int i=0; i<rows; i++)
    	{
	        for(int j=0; j<columns2; j++)
        	{
    	    	cout<<mul_mat[i][j]<<"\t";
			}
        	cout<<endl;
    	}
    cout<<endl;
	}
	else cout<<"Invalid Input ";
	
	return 0;
}
