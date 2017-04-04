#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n;
	long long m;
	long long a;
	cin>>n>>m>>a;

	long long height=0,breadth=0;
	
	if(n%a!=0)
	height=(n/a)+1;
	else
	height=n/a;
	
	if(m%a!=0)
	breadth=(m/a)+1;
	else
	breadth=m/a;

	
	cout<<height*breadth<<endl;
	
	return 0;
}
