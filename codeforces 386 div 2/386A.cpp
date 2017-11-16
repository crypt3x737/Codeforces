#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a ,b,c;
    cin>>a>>b>>c;
    int d=0;
    if(a==0 || b==0 ||c==0)
    {
        cout<<"0"<<endl;
    }
    if(b>=(2*a) && c>=(4*a))
        {
            cout<<7*a<<endl;
            return 0;
        }
     else 
     {
    
        for(int i=a;i>=0;i--)
        {
            if(b>=(2*i) && c>=(4*i))
            {
                cout<<7*i<<endl;
                return 0;
            }
           
        }
            
     }

     cout<<"0"<<endl;

    return 0;
}
