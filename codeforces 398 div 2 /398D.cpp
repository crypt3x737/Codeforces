#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,a,b;
    cin>>n>>k>>a>>b;
    int counter=0;
    string ans="";
     int maj,min;
    if(b!=0 && a!=0)
    {
         maj=a/b;
         min=b/a;
    }
    else 
    {
    maj=k-1;
    min=k-1;
    }
    if(a>b)
    {
        
         for(int i=0;i<n;i++)
        {
            if(counter<k && counter<=maj && a>0)
            {
                ans=ans+'G';
                counter++;
                a--;
            }
            else if(b>0)
            {
                ans=ans+'B';
                counter=0;
                b--;
            }
            else
            ans=ans+'W';
            if(b!=0)
            maj=(int)(a/b);
            
        }
    }    
    else if(b>a)
    {
        
        for(int i=0;i<n;i++)
        {
            if(counter<k && counter<=min && b>0)
            {
                ans=ans+'B';
                counter++;
                b--;
            }
            else if(a>0)
            {
                ans=ans+'G';
                counter=0;
                a--;
            }
             else
            ans=ans+'W';
            if(a!=0)
            min=(int)(b/a);
        }
    }
   else
   {
         for(int i=0;i<n;i++)
        {
            if(i%2==0 && a>0)
            {
                ans=ans+'G';
                a--;
            }
            else if(b>0)
            {
                ans=ans+'B';
                b--;
            }
             else
            ans=ans+'W';
            
        }
   }
   
   int a_count=0;
   int b_count=0;
   int max=0;
     for(int i=0;i<n;i++)
        {
                if(ans[i]=='W')
                {
                    max=9999;
                    break;
                    }
            if(ans[i]=='G')
                {
                a_count++;
                if(max<a_count)
                max=a_count;
                b_count=0;
                }
                else
                {
                   
                    b_count++;
                    if(max<b_count)
                max=b_count;
                 a_count=0;
                }
        }
        if(max<=k)
   cout<<ans<<endl;
   else
   cout<<"NO"<<endl;
    return 0;
}
