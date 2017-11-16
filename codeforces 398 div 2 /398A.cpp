
   #include<bits/stdc++.h>

using namespace std;

int main()
{
    long int n;
    cin>>n;
    
    vector<long int> snacks;
    vector<long int>temp;
    for(long int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        snacks.push_back(input);
    }
    for(long int i=0;i<snacks.size();i++)
    {
        if(snacks[i]==n)
        {
                cout<<snacks[i]<<" ";
                n=n-1;
                temp.clear();
            for(long int j=0;j<i;j++)
            {
                temp.push_back(snacks[j]);
                
            }
            sort(temp.begin(),temp.end(),greater<long int>());
            for(long int j=0;j<i;j++)
            {
                 if(temp[j]==n)
                    {
                    
                        cout<<temp[j]<<" ";
                        n=n-1;
                    }
            }
            cout<<endl;
         }   
         else
        {
         cout<<endl;
         }
         
        
    }

    return 0;
}

