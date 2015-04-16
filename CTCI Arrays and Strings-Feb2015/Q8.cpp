#include <cstdio>
#include <map>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isSubstring(string str, string substr)
{
	if(str.length()<substr.length())
		return 0;

	for(int i=0;i<str.length();i++)
	{
		int j;
		for(j=0;j<substr.length();j++)
		{
			if(str[i+j]!=substr[j])
				break;
		}
		if(j==substr.length())
			return 1;
	}
	return 0;
}

bool is_rotation(string s1, string s2)
{
	if(s1.length()!=s2.length() || s1.length()==0 || s2.length()==0)
		return 0;
	return isSubstring(s2+s2,s1);
}

/*
int main()
{
	cout<<"Enter strings: "<<endl;
	string s1,s2;
	cin>>s1>>s2;
	cout<<is_rotation(s1,s2);
	return 0;

}
*/
