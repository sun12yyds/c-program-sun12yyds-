#include<bits/stdc++.h>
using namespace std;
int a[107],f[108][108];
int main(){
	int n,k,s;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n/2<k+3){
		cout<<-1;
		return 0;
	}
	sort(a,a+n);
	for(int i=2;i<=n;i++){
		for(int j=1;j<=k;j++){
			f[i][j]=min(f[i-1][j],f[i-2][j-1]+(a[i]-a[i-1])*(a[i]-a[i-1]));
		}
	}
	cout<<f[n][k+3];
	return 0;
}
