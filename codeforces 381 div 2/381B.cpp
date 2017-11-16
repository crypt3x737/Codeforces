#include<bits/stdc++.h>

using namespace std;

int main()
{
        int n,m;
        vector<int> num;
        vector<int> mul;
        cin>>n>>m;
        int start_pos;
        int end_pos;
        for(int i=0;i<n;i++)
        {
            int input;
            cin>>input;
            num.push_back(input);
            mul.push_back(0);
        }
        for(int i=0;i<m;i++)
        {
            cin>>start_pos>>end_pos;
            int temp=0;
            for(int j=start_pos-1;j<=end_pos-1;j++)
            {
                temp=temp+num[j];
                
            }
           if(temp>0)
            for(int j=start_pos-1;j<=end_pos-1;j++)
                mul[j]=mul[j]+1;
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+(num[i]*mul[i]);
        }
        cout<<sum<<endl;
        return 0;
}
