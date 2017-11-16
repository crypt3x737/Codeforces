#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int counter=0;
    string puzzle="";
    vector<string> puz;
    string temp;
    int x=0;
    int y=0;
    vector<int> rows_sum;
    vector<int> cols_sum;
    int nope=0;
    
    while(counter<n)
    {
     cin>>temp;
     puzzle=puzzle+temp;
     puz.push_back(temp);
     counter++;
    }
    for(int i=0;i<n;i++)
    {
        int chun=0;
        int sum=0;
        temp=puz[i];
    for(int j=0;j<m;j++)
        {
        if(temp[j]=='X')
        {  
        chun=1;
         if(j==0)
             sum=sum-1;
            else
             sum=sum+j;
            x++;
        }
            else
            y++;
       }
       if(chun==1)
       cols_sum.push_back(sum);
    }
    
    for(int j=0;j<m;j++)
    {
        int sum=0;
        int chun=0;
    for(int i=0;i<n;i++)
        {
        temp=puz[i];
        if(temp[j]=='X')
        {
        chun=1;   
        if(i==0)
        sum=sum-1;
        else
            sum=sum+i;
            x++;
        }
            else
            y++;
       }
       if(chun==1)
       rows_sum.push_back(sum);

    }
    
   
    sort(rows_sum.begin(), rows_sum.end());
    rows_sum.erase( unique( rows_sum.begin(), rows_sum.end() ), rows_sum.end() );
      sort(cols_sum.begin(), cols_sum.end());
    cols_sum.erase( unique( cols_sum.begin(), cols_sum.end() ), cols_sum.end() );
    if(rows_sum.size()==1 && cols_sum.size()==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
     
    
    
    return 0;
}
