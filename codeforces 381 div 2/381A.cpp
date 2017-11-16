#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,a,b,c;
    cin>>n>>a>>b>>c;
    long long int remainder=n%4;
    long long int books=4-remainder;
    if(n%4==0)
        cout<<"0"<<endl;
    else
    {
        if(books==1)
        {
        if(a<=b+c && a<=3*c)
        cout<<a<<endl;
        else if(b+c<=a && b+c<=3*c)
        cout<<b+c<<endl;
        else
        cout<<3*c<<endl;
        }
        else if(books==2)
        {
            if(a*2<=b && 2*a<=2*c)
            cout<<2*a<<endl;
            else if(b<=2*a && b<=2*c)
            cout<<b<<endl;
            else
            cout<<2*c<<endl;
        }
        else if(books==3)
        {
            if(a*3<=c && a*3<=(a+b) && a*3<=(a+2*c))
            cout<<3*a<<endl;
            else if(c<=a*3 && c<=(a+b) && c<=(a+2*c))
            cout<<c<<endl;
            else if(a+b<=a*3 && a+b<=c && a+b<=a+2*c)
            cout<<a+b<<endl;
            else
            cout<<a+2*c<<endl;
        }
    }
    
    return 0;
}
