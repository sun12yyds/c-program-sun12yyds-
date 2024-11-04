#include<bits/stdc++.h>
using namespace std;
int a[105],ans,dp[110],dp1[110];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		dp1[i]=1,dp[i]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++){
			if(a[j]<a[i]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	for(int i=n;i>=1;i--){
		for(int j=i+1;j<=n;j++){
			if(a[j]<a[i]){
				dp1[i]=max(dp1[i],dp1[j]+1);
			}
		}
	}
	for(int i=1;i<=n;i++){
		ans=max(ans,(dp[i]+dp1[i]-1));
	}
	cout<<n-ans;
	return 0;
}
