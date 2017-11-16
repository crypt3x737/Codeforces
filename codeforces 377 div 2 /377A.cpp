#include<iostream>
#include<vector>

using namespace std;

int main()
{
long long int k;
long long int r;
int ans=0;
cin>>k>>r;
for(int i=1;i<=10;i++)
{
    if(((k*i)%10==r) || (k*i)%10==0)
    {
        ans=i;
        cout<<i<<endl;
        break;
    }
}
return 0;
}
