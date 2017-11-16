#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string copy;
    string s;
    cin>>n;
    cin>>s;
    copy=s;
    int count=1;
    if(n%2==1)
    {
        for(int i=0;i<n;i++)
        {
            if(i==0)
            copy[(n/2)]=s[i];
            else
            {
            copy[(n/2)-count]=s[i];
            copy[(n/2)+count]=s[i+1];
            count++;
            i=i+1;
            
            }
        }
    }
    else
    {
         for(int i=0;i<n-1;i++)
        {
            if(i==0)
            copy[(n/2)-1]=s[i];
            else
            {
            copy[((n/2)-1)+count]=s[i];
            copy[((n/2)-1)-count]=s[i+1];
            count++;
            i=i+1;
            
            }
        }
        copy[n-1]=s[n-1];
    }
    cout<<copy<<endl;

    return 0;
}
