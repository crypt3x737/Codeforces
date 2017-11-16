#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<string> words;
    string temp;
    int count=1;
    for(int i=0;i<s.length();i++)
    {
       temp="";
       temp=s.substr(s.length()-i,i)+s.substr(0,s.length()-i);
       words.push_back(temp);
    }
    sort(words.begin(), words.end());
    words.erase( unique( words.begin(), words.end() ), words.end() );
    cout<<words.size()<<endl;
    return 0;
}
