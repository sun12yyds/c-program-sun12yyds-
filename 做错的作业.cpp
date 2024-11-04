#include<bits/stdc++.h>
using namespace std;
int dp[510][510],n;
char a[510];
bool pd(char t1,char t2){
	if(t1=='('&&t2==')') return true;
	if(t1=='['&&t2==']') return true;
	if(t1=='{'&&t2=='}') return true;
	if(t1=='<'&&t2=='>') return true;
	return false;
}
int main(){
	scanf("%s",a+1);n=strlen(a+1);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		dp[i][j]=INT_MAX;
		}
	}
	
	for(int j=1;j<=n;j++){
	    for(int i=1;i<=n-j+1;i++){
		    dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
		    for(int k=1;k<=j-1;k++){
		    	if(pd(a[i+k-1],a[i+j-1])) dp[i][j]=min(dp[i][j],dp[i][k-1]+dp[i+k][j-k-1]);
			}
	    }
	}
	cout<<dp[1][n];
}
