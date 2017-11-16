#include <bits/stdc++.h>

using namespace std;

int main()
{
	int ans=0;
	int people=0;
	string input;
	while(getline(cin,input))
	{
		if(input[0]=='+')
			people++;
		else if(input[0]=='-')
			people--;
		else
		{
			for(int i=0;i<input.length();i++)
			{
				if(input[i]==':')
				{
					ans=ans+(people*(input.length()-i-1));
					break;
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
