#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if (abs(z-x)>abs(z-y))
        {
            cout<<"Cat B"<<endl;
        }
        else if (abs(z-x)<abs(z-y))
        {
            cout<<"Cat A"<<endl;
        }
        else
        {
            cout<<"Mouse C"<<endl;
        }
    }
    return 0;
}