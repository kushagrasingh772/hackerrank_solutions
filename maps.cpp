#include <bits/stdc++.h>
using namespace std;
typedef long long int l;
int main()
{
    int t;
    cin>>t;
    string a;
    int b;
    unordered_map <string,int> m;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b;
        m[a]=b;
    }
    string q;
    for (int i = 0; i < t; i++)
    {
        cin>>q;
        if(m.find(q)!=m.end())
            cout<<q<<"="<<m[q]<<endl;
        else
        {
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}

