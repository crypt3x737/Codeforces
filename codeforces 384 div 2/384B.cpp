#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,k;
    string companies;
    cin>>n>>k;
    vector<long long int>elements;
    long long int ans=0;
    
    if(k%2!=0)
    {
        cout<<"1"<<endl;
        }
        
    else
    {
    long long int remainder=(k%50);
    for(int i=2;i<=remainder;i++)
    {
        if(i
        ++(int)(pow(i,i-1))
    }
    while(remainder!=1)
    {
        remainder=remainder/2;
        ans++;
    }
    cout<<ans+1<<endl;
    
     
    }
        


    return 0;
}
