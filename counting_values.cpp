#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int step=0;
    int c=0;
    int m=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='U')
        {
            ++step;
            if (step==0)
            {
                c++;
            }
        }
        else
        {
            --step;
        }        
    }
    cout<<c<<endl;
    return 0;
}
