#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    int d;
    cin>>d;
    if(d==2)
    {
        if(n%2!=0)
        {
           n=n-1;
        }
        if(n%6==0 || n%6==5)
        cout<<"2"<<endl;
        else if(n%6==3 || n%6==2)
        cout<<"0"<<endl;
        else if(n%6==1 || n%6==4)
        cout<<"1"<<endl;
    }
    else if(d==0)
    {
        if(n%2==0)
        {
           n=n-1;
        }
        if(n%6==5 || n%6==0)
        cout<<"0"<<endl;
        else if(n%6==3 || n%6==2)
        cout<<"2"<<endl;
        else if(n%6==1|| n%6==4)
        cout<<"1"<<endl;
    }
    else
    {
      
            if(n%6==0 || n%6==3)
            cout<<"1"<<endl;
            else if(n%6==1 || n%6==2)
            {
                if(n%2!=0)
                cout<<"0"<<endl;
                else
                cout<<"2"<<endl;
            }
            else
            {
               if(n%2!=0)
                cout<<"2"<<endl;
                else
                cout<<"0"<<endl;
            }
    }
    return 0;
}
