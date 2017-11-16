#include<bits/stdc++.h>

using namespace std;

int main()
{
        int n;
        cin>>n;
        string s="";
        string copy;
        for(int i=0;i<n;i++)
        {
          cin>>copy;
          s=s+copy;
        }
        
        string temp=s;
        for(int i=0;i<n/2;i++)
        {
            if(i%2!=1)
            {
             temp[s.length()-1-i]=s[i];
             temp[i]=s[s.length()-1-i];
             }
        }
        for(int i=0;i<temp.length();i++)
        {
            if(i<temp.length()-1)
            cout<<temp[i]<<" ";
            else
            cout<<temp[i]<<endl;
        }
        return 0;
}
