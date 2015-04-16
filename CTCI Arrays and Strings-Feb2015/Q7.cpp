#include <cstdio>
#include <map>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void set_zero(int** matrix, int m, int n)
{
	vector<int> rows,cols;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(matrix[i][j]==0)
			{
				rows.push_back(i);
				cols.push_back(j);
			}
		}
	}

	for(int i=0;i<rows.size();i++)
	{
		for(int j=0;j<n;j++)
			matrix[rows[i]][j]=0;
	}

	for(int i=0;i<cols.size();i++)
	{
		for(int j=0;j<m;j++)
			matrix[j][cols[i]]=0;
	}

}
/*

int main()
{
	cout<<"Enter dimensions of the matrix: "<<endl;
	int m,n;
	cin>>m>>n;

	int **matrix = new int*[m];
	for(int i=0;i<m;i++)
	{
		matrix[i]= new int[n];
	}

	cout<<"Enter matrix rowwise: "<<endl;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>matrix[i][j];

	cout<<"Matrix you entered is: "<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<matrix[i][j]<<" ";
		cout<<endl;
	}


	set_zero(matrix,m,n);

	cout<<"Result matrix is: "<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<matrix[i][j]<<" ";
		cout<<endl;
	}

}
*/
