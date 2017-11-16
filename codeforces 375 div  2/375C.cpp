#include<iostream>
#include<vector>
#include <algorithm>
#include<math.h>
#include<string>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> play;
    int changes=0;
    int div=n/m;
   
    for(int i=0;i<=m;i++)
    {
      play.push_back(0);
         
    }
     for(int i=1;i<=n;i++)
    {
        int input;
        cin>>input;
        if(input<=m)
        play[input] +=1;
        else
        {
        play[input] +=1;
        changes++;
        }
         
         
    }
       
    int copy=changes;
   
    
    while(copy>0)
    {
         for(int i=1;i<=m;i++)
        {
           if(play[i]<div && copy>0)
           {
            play[i] +=1;
            copy=copy-1;
           }
             
        }
    }
   
   
    for(int i=1;i<=m;i++)
    {
     if(play[i]<div )
       {
        changes=changes+(div-play[i]);
       }
         
    }
     int remainder=changes;
    
    
         for(int i=m+1;i<=n;i++)
        {
           while(play[i]>0 && remainder>0)
           {
            play[i] -=1;
            remainder -= 1;
           }
        }

    
    while(remainder>0)
    {
        cout<<"asd - "<<remainder<<endl;
         for(int i=1;i<=m;i++)
        {
           if(play[i]>div && remainder>0)
           {
            play[i] -=1;
            remainder -= 1;
           }
        }
    }

    
    cout<<div<<" "<<changes<<endl;
    for(int i=1;i<=m;i++)
    {  
        for(int j=0;j<play[i];j++)
           cout<<i<<" ";
    }   
    cout<<endl;
    
    return 0;
}
