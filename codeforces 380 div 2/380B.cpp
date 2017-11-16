#include<bits/stdc++.h>

using namespace std;

int main()
{
      int n,m;
      cin>>n>>m;
      string input;
      vector<string> plan;
      char a;
      for(int i=0;i<n;i++)
      {
      input="";
        for(int j=0;j<m;j++)
        {
         cin>>a;
         input=input+a;   
         
        }
        plan.push_back (input);
      }
      int ans=0;
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
            cout<<plan[i]<<endl;
             if(plan[i][j]=='0')
             {  
            
                 if(i-1>=0 && plan[i-1][j]=='1')
                {
                 ans++;     
                }
                 if(i+1<=n-1 && plan[i+1][j]=='1')
                {
                 ans++;     
                }
                 if(j+1<=m-1 && plan[i][j+1]=='1')
                {
                 ans++;     
                }
                 if(j-1>=0 && plan[i][j-1]=='1')
                {
                 ans++;     
                }
                 if(j-1>=0 && i-1>=0 && plan[i-1][j-1]=='1')
                {
                 ans++;     
                }
                 if(j+1<=m-1 && i-1>=0 && plan[i-1][j+1]=='1')
                {
                 cout<<"enter"<<endl;
                 ans++;     
                }
                 if(j-1>=0 && i+1<=n-1 && plan[i+1][j-1]=='1')
                {
                 cout<<"enter"<<endl;
                 ans++;
                }
                 if(j+1<=m-1 && i+1<=n-1 && plan[i+1][j+1]=='1')
                {

                 ans++;     
                }
             }
        }
        
      }
      
      cout<<ans<<endl;
        return 0;
}
