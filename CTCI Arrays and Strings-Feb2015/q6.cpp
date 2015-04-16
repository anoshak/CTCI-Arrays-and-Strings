/*
 * q6.cpp
 *
 *  Created on: Mar 11, 2015
 *      Author: Anoshak
 */

#include <cstdio>
#include <map>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void rotate(int** mat, int n)
{
	for(int j=0;j<n/2;j++)
	{
	for(int i =j;i<n-1-j;i++)
	{
		int temp = mat[j][i+j];
		mat[j][i+j] = mat[n-1-i-j][j];
		mat[n-1-i-j][j] = mat[n-1-j][n-1-i-j];
		mat[n-1-j][n-1-i-j] = mat[i+j][n-1-j];
		mat[i+j][n-1-j] = temp;
	}
	}
}

int main()
{
	cout<<"Enter n: "<<endl;
	int n;
	cin>>n;
	int** mat = new int*[n];
	for(int i=0;i <n ;i++)
		mat[i] = new int[n];
	cout<<"Enter matrix elements row-wise: "<<endl;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>mat[i][j];

	rotate(mat,n);

	cout<<"Rotated matrix is: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}

