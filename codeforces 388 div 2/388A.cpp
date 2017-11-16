#include<iostream>
#include<vector>

using namespace std;

int main()
{
long long int n;
long long int d;
int t =0;
cin>>n;
if(n%2==0)
    {
        d=n/2;
    }
else
    {
    d=(n-2)/2;
    t=1;
    }
    cout<<d+t<<endl;
    for(int i=0;i<d;i++)
    {
        if(i!=d-1)
        cout<<"2"<<" ";
        else if(i==d-1 && t==1)
        cout<<"2"<<" ";
        else if(i==d-1 && t==0)
        cout<<"2"<<endl;
        
    }
    if(t==1)
    cout<<3<<endl;

return 0;
}
