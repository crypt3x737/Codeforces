#include<iostream>
#include<vector>
#include <algorithm>
#include<math.h>
#include<string>

using namespace std;

int main()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   string temp="";
   int depublicans=0;
   int remocrats=0;
   for(int i=0;i<s.size();i++)
   {
    if(s[i]=='R')
        remocrats++;
    else
        depublicans++;
   }
   if(remocrats > depublicans && remocrats-depublicans>1)
   {
    cout<<"R"<<endl;
    return 0;
    }
    else if(remocrats < depublicans && depublicans-remocrats>1)
    {
    cout<<"D"<<endl;
    return 0;
    }
    else
    {
        while(remocrats>0 && depublicans>0)
        {
         for(int i=0;i<s.size();i++)
           {
            if(s[i]=='R')
               {
                depublicans--;
                s[i]='0';
                temp=temp+"R";
                }
                else
                {
                s[i]='0';
                temp=temp+"D";
                remocrats--;
                }
           }
           s=temp;
                
      }
    }
    if(remocrats==0)
    cout<<"D"<<endl;
    else
    cout<<"R"<<endl;
    
    return 0;
}
