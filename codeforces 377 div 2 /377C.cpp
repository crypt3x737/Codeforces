#include<iostream>
#include<vector>
#include <algorithm>
#include<math.h>
#include<string>

using namespace std;

int main()
{
    long long int b,d,s;
    cin>>b>>d>>s;
    
    if(b==d && d==s)
    {
        cout<<"0"<<endl;
    }
    else if(b==d && s<b)
    {
        cout<<b-1-s<<endl;
    }
    else if(b==s && d<b)
    {
        cout<<b-1-d<<endl;
    }
    else if(d==s && b<d)
    {
        cout<<d-1-b<<endl;
    }
    else
    {
        long long int max=0;
        long long int mid=0;
        if(b>=d && b>=s)
        {
            max=b;
            cout<<(max-1-d)+(max-1-s)<<endl;
            }
        else if(d>=b && d>=s)
        {
            max=d;
             cout<<(max-1-b)+(max-1-s)<<endl;
            }
        else
        {
            max=s;
             cout<<(max-1-d)+(max-1-b)<<endl;
            }
    
    }
    
    
    
    return 0;
}
