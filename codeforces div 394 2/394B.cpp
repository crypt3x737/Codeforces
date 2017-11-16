#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,l;
   cin>>n>>l;
   vector<int> a;
   vector<int> b;
   vector<int>diff_a;
   vector<int>diff_b;
   
   for(int i=0;i<n;i++)
   {
       int temp;
       cin>>temp;
       a.push_back(temp);
   }
   for(int i=0;i<n;i++)
   {
       int temp;
       cin>>temp;
       b.push_back(temp);
   }

   
        for(int j=0;j<a.size()-1;j++)
        {
            diff_a.push_back(abs(a[j]-a[j+1]));
            diff_b.push_back(abs(b[j]-b[j+1]));
        }
        diff_a.push_back(abs(l-a[a.size()-1]+a[0]));
        diff_b.push_back(abs(l-b[b.size()-1]+b[0]));
        
        sort(diff_a.begin(),diff_a.end());
        sort(diff_b.begin(),diff_b.end());
        
  
   int count=0;
   
  for(int i=0;i<diff_a.size();i++)
  {
    if(diff_a[i]!=diff_b[i])
        { sort(diff_a.begin(),diff_a.end());
        cout<<"NO"<<endl;
        return 0;
        }
  }

    cout<<"YES"<<endl;

        return 0;
}
