#include<bits/stdc++.h>

using namespace std;

int main()
{     
    long long int n;
    long long int x;
    long long int counter=0;
    cin>>n>>x;
    int input;
    vector<int>numbers;
    long long int pairs=0;
    long long int even=0,odd=0;
    while(counter<n)
    {
    cin>>input;
    numbers.push_back(input);
    counter++;
    }
    for(int i=0;i<numbers.size();i++)
    {
        for(int j=i+1;j<numbers.size();j++)
        {
            if(numbers[i] xor numbers[j]==x)
            {
                pairs++;
                cout<<numbers[i]<<"      "<<numbers[j]<<endl;
            }
        }
    }
    cout<<pairs<<endl;
    

    
    return 0;
}
