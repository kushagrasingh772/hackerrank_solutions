#include <bits/stdc++.h>
using namespace std;
typedef long long int l;
int main()
{
    int n;
    cin>>n;
    int k=0;
    int m=0;
    while (n>0)
    {
        int d=n%2;
        n=n/2;
        if (d==1)
        {
            k++;
        }
        else
        {
            k=0;
        }
        m=max(m,k);
    }
    cout<<m;
    return 0;
}