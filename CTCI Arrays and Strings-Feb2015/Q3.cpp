#include <cstdio>
#include <map>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

bool isPerm(string s1, string s2)
{
	if(s1.length()!=s2.length())
		return 0;
	map<char,int> mymap;
	for(int i=0;i<s1.length();i++)
	{
		if(mymap.find(s1[i])==mymap.end())
			mymap[s1[i]]=1;
		else mymap[s1[i]]+=1;
	}

	for(int i=0;i<s2.length();i++)
	{
		if(mymap.find(s2[i])==mymap.end())
			return 0;
		else mymap[s2[i]]-=1;
	}

	map<char,int>::iterator itr;
	for(itr=mymap.begin();itr!=mymap.end();itr++)
	{
		if(itr->second!=0)
			return 0;
	}

	return 1;

}

/*
int main()
{
	cout<<"Enter the two strings to be checked: "<<endl;
	string s1,s2;
	cin>>s1>>s2;
	if(isPerm(s1,s2))
		cout<<"The two strings are permutations of each other";
	else cout<<"The two strings are not permutations of each other";
	return 0;
}
*/
