#include <bits/stdc++.h>
using namespace std;
typedef long long int l;
int main()
{
    l n;
    cin>>n;
    l a[n];
    l i,j;
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    l m=1000000;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (abs(a[i]-a[j])<m)
            {
                m=abs(a[i]-a[j]);
            }
        }
    }
    cout<<m;
    return 0;
}