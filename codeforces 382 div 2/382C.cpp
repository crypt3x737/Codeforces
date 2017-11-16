#include<bits/stdc++.h>

using namespace std;

int main()
{
        long long int n;
        cin>>n;
        vector<long long int> players;
        int count=0;
        long long int copy=n;
        for(long long int i=0;i<n;i++)
            players.push_back(0);
        
        int d=0;
        while(n!=1)
        {   
            if(n%2==0)
            {
                n=n/2;
                d++;
                players.resize(n/2);
                for(long long int i=0;i<n;i++)
                {
                players[i]=d;
                }
                sort(players.begin(),players.end());
            }
            else
            {
                n=n/2;
                d++;
                players.resize((n/2)+1);
                for(long long int i=0;i<n-1;i++)
                {
                players[i]=d;
                }
                players[n-1]=d-1;
                sort(players.begin(),players.end());
            }
            
        }

        cout<<players[0]<<endl;
       
        return 0;
}
