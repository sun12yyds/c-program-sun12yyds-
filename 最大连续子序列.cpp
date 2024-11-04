#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,f,a;
	cin>>n>>f;
	int ans=f;
	for(int i=2;i<=n;i++){
		cin>>a;
		f=max(f,0)+a;
		ans=max(ans,f);
	}
	cout<<ans;
	return 0;
}
