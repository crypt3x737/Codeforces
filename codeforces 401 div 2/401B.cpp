#include<bits/stdc++.h>

using namespace std;

int main()
{     
    int n;
    cin>>n;
    vector<int> moriarty;
    vector<int>sherlock;
    vector<int> copy_mor;
     vector<int> copy_sher;
      int d;
        cin>>d;
    for(int i=0;i<n;i++)
    {
        int temp=d%10;
        d=d/10;
        sherlock.push_back(temp);
        copy_sher.push_back(temp);
    }  
    cin>>d;
    for(int i=0;i<n;i++)
    {
        int temp=d%10;
        d=d/10;
        moriarty.push_back(temp);
        copy_mor.push_back(temp);
    }  
   
    sort(copy_mor.begin(),copy_mor.end());
   // reverse(copy_mor.begin(),copy_mor.end());
      sort(copy_sher.begin(),copy_sher.end());
    //reverse(copy_sher.begin(),copy_sher.end());

    int min=0;
    int max=0;
    for(int i=0;i<n;i++)
    {
       int j;
       bool cond=false;
       for(j=0;j<n;j++)
       {
        if(copy_mor[j]>=sherlock[i])
        {
            copy_mor[j]=-1;
            cond=true;
            break;
            
        }
       }
       if(cond==false)
        min++;
    }
    cout<<min<<endl;
     sort(moriarty.begin(),moriarty.end());
     for(int i=0;i<n;i++)
    {
        int j;
       for(j=0;j<n;j++)
       {
        if(moriarty[j]>sherlock[i])
        {
            moriarty[j]=-1;
            max++;
            break;
            
        }
       }
    }
     cout<<max<<endl;
    
    return 0;
}
