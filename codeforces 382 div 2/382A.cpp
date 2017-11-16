#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string input;
    cin>>input;
    int g,t;
    int ans=0;
    for(int i=0;i<input.length();i++)
    {
        if(input[i]=='G')
            g=i;
        if(input[i]=='T')
            t=i;
    }
    
    if(g==t)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(g<t)
    {
        while(g!=t && g+k<input.length())
        {
        
            g=g+k;
            if(input[g]=='#')
            {
                ans=-1;
                 cout<<"NO"<<endl;
                return 0;
            }
            else if(input[g]=='T')
            {
                ans=0;
                g=t;
                cout<<"YES"<<endl;
                return 0;
            }    
            
        }
    }
    else
    {
        while(g!=t && g-k>=0)
        {
            g=g-k;
            if(input[g]=='#')
            {
                ans=-1;
                 cout<<"NO"<<endl;
                return 0;
                }
            else if(input[g]=='T')
            {
                ans=0;
                g=t;
                 cout<<"YES"<<endl;
                return 0;
            }    
            
        }
    }
    
     cout<<"NO"<<endl;
   
    return 0;
}
