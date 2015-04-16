#include <cstdio>
#include <map>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


void reverse(char* str)
{
	int length = 0;
	while(str[length]!='\0')
		length++;
	int i,j;
	for(i =0,j=length-1 ; i<j ; i++,j--)
	{
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
}

/*
int main()
{
	cout<<"Enter string to be reversed: "<<endl;
	char* str = new char[100];
	cin.getline(str,100);
	reverse(str);
	cout<<"Reversed string is: "<<str;
	return 0;

}
*/
