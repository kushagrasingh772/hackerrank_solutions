#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;cin>>t;
while(t--)
{
    int m,n,j;cin>>m>>n;
    int a[n];
    for(int i=0;i<n;i++)
     {j=0;

     cin>>a[i];
     while(a[j]+a[i]!=m&&j<i)
         ++j;// searching of j where a[j]+a[i]=m

     if(a[i]+a[j]==m&&i>j){

     cout<<j+1<<" "<<i+1<<endl;break;}
    }   cin.ignore(numeric_limits<streamsize>::max(), '\n');
 }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}