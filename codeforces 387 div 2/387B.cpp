#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n; 
   string s; 
   cin>>n;
   cin>>s;
   if(n%2!=0)
   {
   cout<<"==="<<endl;
   return 0;
   }
   int d=n/4;
   int a=0,c=0,g=0,t=0;
   for(int i=0;i<n;i++)
   {
    if(s[i]=='A')
        a++;
    else if(s[i]=='C')
        c++;
    else if(s[i]=='G')
        g++;
    else if(s[i]=='T')
        t++;
   }
   a=d-a;
   c=d-c;
   g=d-g;
   t=d-t;
   if(a<0 ||c<0||g<0||t<0)
    {
        cout<<"==="<<endl;
        return 0;
    }
   for(int i=0;i<n;i++)
   {
    if(s[i]=='?' && a>0)
        {
        s[i]='A';
        a--;
        }
        else if(s[i]=='?' && c>0)
        {
        s[i]='C';
        c--;
        }
          else if(s[i]=='?' && g>0)
        {
        s[i]='G';
        g--;
        }
          else if(s[i]=='?' && t>0)
        {
        s[i]='T';
        g--;
        }
   }
   a=0;
   c=0;
   g=0;t=0;
    for(int i=0;i<n;i++)
   {
    if(s[i]=='A')
        a++;
    else if(s[i]=='C')
        c++;
    else if(s[i]=='G')
        g++;
    else if(s[i]=='T')
        t++;
   }
   if(a==d && c==d && g==d && t==d)
    cout<<s<<endl;
    else
    cout<<"==="<<endl;
 


return 0;
}
