#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	string b;
	cin>>a>>b;
	if(a.compare(b)!=0)
	{
		cout<<max(a.length(),b.length())<<endl;
	}
	else
	{
		cout<<"-1"<<endl;
	}
	return 0;
}
