#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,z;
    cin>>n>>m>>z;
    int kill=0;
    for(int i=1;i<=z;i++)
    {
        for(int j=1;m*j<=z;j++)
        {
        if(i*n==m*j)
        kill++;
        }
    }
    cout<<kill<<endl;
    return 0;
}
