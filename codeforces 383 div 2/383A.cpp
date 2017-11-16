#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int d;
    long long int n;
    cin>>n;
     d=n%4;
    if(n==0)
    cout<<"1"<<endl;
    else if(d==0)
    cout<<"6"<<endl;
    else if(d==1)
    cout<<"8"<<endl;
    else if(d==2)
    cout<<"4"<<endl;
    else if(d==3)
    cout<<"2"<<endl;
   
    return 0;
}
