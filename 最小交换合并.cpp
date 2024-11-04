#include<bits/stdc++.h>
using namespace std;
int n,temp,sum[110],a[110],dp[110][110],ans=INT_MAX;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int t=1;t<n;t++){
		memset(dp,0x7f,sizeof(dp));
		swap(a[t],a[t+1]);
		for(int i=1;i<=n;i++){
			sum[i]=sum[i-1]+a[i],dp[i][1]=0;
		}
		for(int j=1;j<=n;j++){
			for(int i=1;i<=n-j+1;i++){
				for(int k=1;k<j;k++){
					dp[i][j]=min(dp[i][k]+dp[i+k][j-k]+sum[i+j-1]-sum[i-1],dp[i][j]);
				}
			}
		}
		ans=min(ans,dp[1][n]);
		swap(a[t],a[t+1]);
	}
	cout<<ans;
	return 0;
}
