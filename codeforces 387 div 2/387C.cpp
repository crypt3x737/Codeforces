#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n; 
   int q;
   cin>>n;
   cin>>q;
   vector<int> servers;
   for(int i=0;i<n;i++)
    servers.push_back(0);
   int t,k,d;
   int time=0;
   int curr_server=0;
   int ser_avail=0;
   int sum=0;
   int count=0;
   while(count<q)
   {
       cin>>t>>k>>d;
       if(count==0)
       {
        if(k>n)
            cout<<"-1"<<endl;
        else
        {
            
            time=t+d;
            for(int i=0;i<k;i++)
                servers.push_back(time);
            for(int i=1;i<=k;i++)
                sum=sum+i;
                cout<<sum<<endl;      
        }
       }
       else
       {
       sum=0;
       ser_avail=0;
            for(int i=0;i<n;i++)
            {
                if(servers[i]-t>=0)
                servers[i]=servers[i]-t; 
                else
                servers[i]=0;
            }
              for(int i=0;i<n;i++)
            {
                if(servers[i]<1)
                    ser_avail++;
            }
            if(ser_avail<k)
               cout<<"-1"<<endl;
             else
             {
                    for(int i=0;i<n;i++)
                        {
                            if(servers[i]<1)
                            {
                                sum=sum+(i+1);
                                k=k-1;
                                servers[i]=servers[i]+t+d;
                                
                            }
                            if(k==0)
                            i=n;
                        }
                        cout<<sum<<endl;
             }
            
       }
       
      
               
    
    count++;
   }
 


return 0;
}
