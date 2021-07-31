#include<bits/stdc++.h>
using namespace std;
#define For(i,n) for(int i=0;i<n;i++)
int main()
{
    int a[5];
    For(i,5)
    {
        cin>>a[i];
    }
    sort(a,a+5);
    int mi=0,ma=0;
    int j=0;
    int k=4;
    For(i,4)
    {
        ma+=a[j];
        mi+=a[k];
        j++;
        k--;
    }
    cout<<ma<<" "<<mi;
    return 0;
}
