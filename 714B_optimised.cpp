	#include <bits/stdc++.h>

using namespace std;

int main()
{
	set<long long> s;
	vector<long long> v;
	long n;
	int siz;
	cin>>n;
	for(long long i=0;i<n;i++)
	{
		long long input;
		cin>>input;
		s.insert(input);
		
		if(s.size()>3)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		
	}
	
	copy(s.begin(),s.end(),back_inserter(v));
	sort(v.begin(),v.end());
	siz=v.size();

	if(siz==3)
	{
		if(v[1]-v[0]==v[2]-v[1])
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else if(siz==2||siz==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
