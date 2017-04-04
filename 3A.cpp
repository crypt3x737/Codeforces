#include <bits/stdc++.h>

using namespace std;

int main()
{
	string init;
	string dest;
	cin>>init>>dest;
	vector<string> moves;
	int move=0;
	while(init.compare(dest)!=0)
	{
	if(init[0]<dest[0])
		{
			init[0]= char((int)(init[0])+1);
			if(init[1]<dest[1])
			{
				init[1]=(int)(init[1])+1;
				moves.push_back("RU");
			}
			else if(init[1]>dest[1])
			{
				init[1]=(int)(init[1])-1;
				moves.push_back("RD");
			}
			else
				moves.push_back("R");
		}
		else if(init[0]>dest[0])
		{
			init[0]= char((int)(init[0])-1);
			if(init[1]<dest[1])
			{
				init[1]=(int)(init[1])+1;
				moves.push_back("LU");
			
			}
			else if(init[1]>dest[1])
			{
				init[1]=(int)(init[1])-1;
				moves.push_back("LD");
			}
			else
				moves.push_back("L");
		}
		else
		{
			if(init[1]<dest[1])
			{
				init[1]=(int)(init[1])+1;
				moves.push_back("U");
			}
			else if(init[1]>dest[1])
			{
				init[1]=(int)(init[1])-1;
				moves.push_back("D");
			}
		}
		move++;
	}
	cout<<move<<endl;
	for(int i=0;i<moves.size();i++)
	cout<<moves[i]<<endl;
	return 0;
}
