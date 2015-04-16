#include <cstdio>
#include <map>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

bool isUnique(string s)
{
	map<char,bool> mymap;
	for(int i=0;i<s.length();i++)
	{
		if(mymap.find(s[i])==mymap.end())
			mymap[s[i]]=1;
		else return 0;
	}

	return 1;
}

/*int main()
{
	cout<<"Enter string to be checked: "<<endl;
	string s;
	getline(cin,s);
	if(isUnique(s))
		cout<<"String has all unique characters."<<endl;
	else cout<<"String doesn't have all unique characters."<<endl;
	return 0;

}*/
