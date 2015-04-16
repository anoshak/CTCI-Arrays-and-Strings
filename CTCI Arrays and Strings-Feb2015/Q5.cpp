#include <cstdio>
#include <map>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

string get_count(int count);

string compress_using_extra_space(string input)
{
	string result;
	int count;
	for(int i=0;i<input.length();)
	{
		char c = input[i];
		result = result + c;
		count = 1;
		i=i+1;
		while(input[i]==c && i<input.length())
		{
			i++;
			count++;
		}
		result = result + get_count(count);


	}
	if(input.length()<result.length())
		return input;
	else return result;

}

string get_count(int count)
{
	string result;
	if(count<10)
	{
		char c = count + '0';
		result = result + c;
		return result;
	}

	while(count)
	{
		char c = count%10 + '0';
		result = result + c;
		count=count/10;
	}

	//reverse the string
	for(int i=0,j=result.length()-1;i<j;i++,j--)
	{
		char temp = result[i];
		result[i]=result[j];
		result[j]=temp;
	}

	return result;
}

/*
int main()
{
	cout<<"Enter string: "<<endl;
	string s;
	cin>>s;
	cout<<"Compressed string is: "<<compress_using_extra_space(s);
	return 0;
}
*/
