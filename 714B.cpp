#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<long long> copy;
	long n;
	int siz;
	cin>>n;
	for(long long i=0;i<n;i++)
	{
		long long input;
		cin>>input;
		copy.push_back(input);

		
	}
	sort(copy.begin(),copy.end());
	copy.erase(unique(copy.begin(),copy.end()),copy.end());
	siz=copy.size();
	
	if(siz==3)
	{
		if(copy[1]-copy[0]==copy[2]-copy[1])
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
