#include<bits/stdc++.h>
using namespace std;
int f[500][500],j,l;
char a[51];
int main(){
	scanf("%s",a+1);
	l=strlen(a+1);
	for(int i=1;i<=l;i++){
		for(int j=1;j<=l;j++){
			f[i][j]=1e9;
		}
	}
	for(int i=1;i<=l;i++){
		f[i][i]=1;
	}
	for(int len=2;len<=l;len++){
		for(int i=1;i+len-1<=l;i++){
			j=i+len-1;
			if(a[i]==a[j]){
				f[i][j]=min(f[i+1][j],f[i][j-1]);
			}else{
				for(int k=i;k<j;k++){
					f[i][j]=min(f[i][j],f[i][k]+f[k+1][j]);
				}
			}
		}
	}
	cout<<f[1][1];
	return 0;
}
