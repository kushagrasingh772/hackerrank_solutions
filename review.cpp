#include <bits/stdc++.h>
using namespace std;
typedef long long int l;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        for (int i = 0; i < s.length(); i++)
        {
            if (i%2==0)
            {
                cout<<s.at(i);
            }
        }
        cout<<" ";
        for (int i = 0; i < s.length(); i++)
        {
            if (i%2!=0)
            {
                cout<<s.at(i);
            }
        }
        cout<<endl;
    }
    return 0;
}