#include <cstdio>
#include <map>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void replace_spaces(char* str)
{
  int length = 0,nos=0;
  while(str[length]!='\0')
  {
	  if(str[length]==' ')
		  nos++;
	  length++;
  }
  if(nos==0 || length==0)
	  return;
  int newLength = length + nos*2; //new length of string

  for(int i=length-1,j=newLength-1;i!=-1;i--,j--)
  {
	  if(str[i]==' ')
	  {
		  str[j]='0';
		  j--;
		  str[j]='2';
		  j--;
		  str[j]='%';
	  }
	  else str[j]=str[i];

  }
  str[newLength] = '\0';


}
/*
int main()
{
	cout<<"Enter string: "<<endl;
	char* str = new char[100];
	cin.getline(str,100);
	replace_spaces(str);
	cout<<"Result string: "<<str<<endl;
	return 0;
}
*/
