#include<bits/stdc++.h>
using namespace std;
int t,a[5];
int main(){
	cin>>t;
	while(t--){
		cin>>a[1]>>a[2]>>a[3];
		sort(a+1,a+4);
		
		if(a[2]!=a[3]) cout<<"No"<<endl;
		else cout<<"Yes\n"<<a[3]<<" "<<a[1]<<" "<<1<<endl;
	}
}