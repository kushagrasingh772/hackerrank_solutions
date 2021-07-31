#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],b[3];
    int suma=0,sumb=0;
    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i]>b[i])
        {
            suma+=1;
        }
        else if (a[i]<b[i])
        {
            sumb+=1;
        }
    }
    cout<<suma<<" "<<sumb;
    return 0;
}