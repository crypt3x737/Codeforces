#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long int n,a=0,b=0;
    long long int min=9999999;
    long long int d;
    cin>>n;
 
        for(long long int i=1;i<=n;i++)
        {

                if(n%i==0)
                {
                    d=(n/i)-i;
                    if(d<min && d>=0)
                    {
                        min=d;
                        a=i;
                        b=(n/i);
                    }
               }
            
        }
        cout<<a<<" "<<b<<endl;

return 0;
}
