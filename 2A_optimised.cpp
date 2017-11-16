#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long max=-1111;
	string ans;
	int answer;
	long long n;
	cin>>n;
	vector <pair<string,long long>> players(n);
	unordered_map<string,long long> player;
	for(long long i=0;i<n;i++)
	{
		cin>>players[i].first>>players[i].second;
		player[players[i].first]=player[players[i].first]+players[i].second;
	}

	for(auto it=player.begin();it!=player.end();++it)
	{
		if(max < it->second)
		{
			max=it->second;
			ans=it->first;
		}
			
	}
	
	for(auto it=player.begin();it!=player.end();++it)
	{
		if(max != it->second)
		{
			player.erase(it->first);
		}
		else
		{
		player[it->first]=0;
		}
			
	}
	
	for(long long i=0;i<n;i++)
	{
	 if(player.find(players[i].first)!=player.end())
		{
		player[players[i].first]=player[players[i].first]+players[i].second;
			if(player[players[i].first]>=max)
			{
			cout<<players[i].first<<endl;
			return 0;
			}
		}
	}
	return 0;
}
