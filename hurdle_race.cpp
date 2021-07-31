#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int c=a[n-1]-k;
    if (c<0)
    {
        cout<<0;
    }
    else
    {
        cout<<c;
    }
    return 0;
}