#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    string companies;
    cin>>n>>a>>b;
    cin>>companies;
        cout<<abs(int(companies[a-1]-'0')-int(companies[b-1]-'0'))<<endl;

    return 0;
}
