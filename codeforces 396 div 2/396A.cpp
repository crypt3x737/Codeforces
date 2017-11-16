#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int count=0;
    if(a.length()>b.length())
    cout<<a.length()<<endl;
    else if(b.length()>a.length())
    cout<<b.length()<<endl;
    else if(a.compare(b)!=0)
    cout<<a.length()<<endl;
    else if(a.compare(b)==0)
    cout<<"-1"<<endl;
    return 0;
}
