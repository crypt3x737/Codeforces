#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long max=-1111;
	
	
	string ans;
	int answer;
	long long n;
	cin>>n;
	string players[n];
	long long score[n];
	unordered_map<string,long long> player;
	for(long long i=0;i<n;i++)
	{
		string a;
		long long input;
		cin>>a>>input;
		if(player.find(a)==player.end())
		{
			player[a]=input;
		}
		else
		{
			player[a]=player[a]+input;
		}
		players[i]=a;
		score[i]=input;
	}

	for(auto it=player.begin();it!=player.end();++it)
	{
		if(max < it->second)
		{
			max=it->second;
			ans=it->first;
		}
			
	}
	
	vector<string> check;
	int mul=0;
	
	for(auto it=player.begin();it!=player.end();++it)
	{
		if(max == it->second)
		{
			check.push_back(it->first);
			mul++;
		}
			
	}
	
	player.clear();
	
	if(mul==0)
	{
	cout<<ans<<endl;
	}
	else
	{
		for(long long i=0;i<n;i++)
		{
			if(player.find(players[i])==player.end() && find(check.begin(),check.end(),players[i])!=check.end())
			{
				player[players[i]]=score[i];
				if(player[players[i]]>=max)
				{
					cout<<players[i]<<endl;
					return 0;
				}
			}
			else if(find(check.begin(),check.end(),players[i])!=check.end())
			{
				player[players[i]]=player[players[i]]+score[i];
				if(player[players[i]]>=max)
				{
					cout<<players[i]<<endl;
					return 0;
				}
			}
		}
	}
	return 0;
}
