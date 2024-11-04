#include<bits/stdc++.h>
using namespace std;
int a[207],f[10000][10000],sum[10000][10000];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=n;j++){
		for(int l=1;l<=n;l++){
		    for(int i=1;i<=n-l;i++){
		  	    j=i+l-1;
			    f[i][j]=max(sum[i][j]-f[i+1][j],sum[i][j]-f[i][j-1]);
		    } 
	    }
	}
	cout<<f[1][n]<<" "<<sum[1][n]-f[1][n];
	return 0;
}
