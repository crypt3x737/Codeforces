#include<iostream>
#include<vector>
#include <algorithm>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    string s="";
    for(int i=0;i<n;i++)
    {
    char c;
    cin>>c;
    s=s+c;
    }
    string longest=s;
    int max=0;
    int inside=0;
    int start=0,end=0;
    int temp=0;
    int brackets=0;
    bool ans;
    bool none;
    for(int i=0;i<longest.length();i++)
    {
       if(longest[i]=='(') 
        {
            start=i;
        }
        if(longest[i]==')')
        {
          for(int j=start;j<=i;j++)
          {
           if(s[j]!='_' && j!=start && j!=i && ans==true)
           {
            brackets++;
            ans=false;
           }
           else if(s[j]=='_')
            ans=true;
           
           longest[j]='_';
          }
        }
        ans=true;
    }
    for(int i=0;i<longest.length();i++)
    {
        if(longest[i]!='_')
         temp++;
        if(longest[i]=='_')
        {
            if(max<temp)
            max=temp;
            temp=0;
        }
        else if(max<temp)
            max=temp;
         
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='_' &&  s[i]!='(' && s[i]!=')')
        {
        none=true;
        }
        
        else
        {
        none=false;
        i=s.length();
        }
    }
    
    if(none==true)
     max=s.length();
     
    cout<<max<<" "<<brackets<<endl;
    return 0;
}
