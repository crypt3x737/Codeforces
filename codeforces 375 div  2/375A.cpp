#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
int a,b,c;
cin>>a>>b>>c;
vector<int> num;
num.push_back(a);
num.push_back(b);
num.push_back(c);
sort(num.begin(),num.end());
int sum=(num[2]-num[1])+(num[1]-num[0]);
cout<<sum<<endl;



return 0;
}
