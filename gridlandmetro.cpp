#include<bits/stdc++.h>
using namespace std;
typedef long long int l;
int main()
{
    l n,m,k;
    cin>>n>>m>>k;
    l i;
    l sum=0;
    for ( i = 0; i < k; i++)
    {
        l a,b,c;
        cin>>a>>b>>c;
        sum+=abs(b-c);
    }
    sum+=k;
    l g=n*m;
    l o=g-sum;
    cout<<o;
    return 0;
}