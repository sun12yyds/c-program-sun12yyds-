#include<bits/stdc++.h>
using namespace std;
int f[10000][10000];
char a[5009];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int q=n;q>=1;q--){
		for(int z=q;z<=n;z++){
			if(a[q]==a[z]) f[q][z]=f[q+1][z-1];
			else f[q][z]=min(f[1+q][z],f[q][z-1])+1;
		}
	}
	cout<<f[1][n];
	return 0;
}
