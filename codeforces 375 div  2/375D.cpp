#include<iostream>
#include<vector>
#include <algorithm>
#include<math.h>
#include<string>

using namespace std;

int main()
{
    long long int n,m;
    cin>>n>>m;
    vector<long long int> d;
    vector<long long int> a;
    for(long long int i=0;i<n;i++)
    {
        long long int input;
        cin>>input;
        d.push_back(input);
    }  
    
    for(long long int i=0;i<m;i++)
    {
        long long int input;
        cin>>input;
        a.push_back(input);
        sort(a.begin(),a.end());
    }  
    long long int ans=0;
    long long int sum=0;
    long long int start;
    int valid=0;
    for(long long int i=0;i<m;i++)
    {
        valid=0;
         start=a[i];
            sum=sum+start;
        for(long long int k=sum;k<n;k++)
        {
            
            if(d[k]>0)
            {
                valid=1;
                sum++;
                k=n;
            }
        }
     
    }  
    
    if(valid==0 || sum>n)
        cout<<"-1"<<endl;
    else
        cout<<sum<<endl;
  
    
    
    return 0;
}
