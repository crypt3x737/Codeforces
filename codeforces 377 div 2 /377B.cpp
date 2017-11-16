#include<iostream>
#include<vector>
#include <algorithm>
#include<math.h>

using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    vector<long>walks;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        walks.push_back(input);
    }
    for(int i=0;i<walks.size()-1;i++)
    {
        if(walks[i]+walks[i+1]<k)
        {
        sum=sum+(k-walks[i]-walks[i+1]);
            walks[i+1]=walks[i+1]+(k-walks[i]-walks[i+1]);
        }
     
    }
    cout<<sum<<endl;
       for(int j=0;j<walks.size();j++)
    {
      cout<<walks[j]<<" ";
    }
    return 0;
}
