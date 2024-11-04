#include<bits/stdc++.h>
using namespace std;
int f[1009],a[1009];
int main(){
    int n;
	scanf("%d",&n);
	scanf("%d",&f[1]);
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i;j++){
			scanf("%d",&a[j]);
		}
		f[i]=f[i-1]+a[i];
	    for(int j=i-1;j>=2;j--){
		    f[j]=max(f[j-1],f[j])+a[j];
	    }
	    f[1]=f[1]+a[1];
	}
	int ans=-999999999;
	for(int j=1;j<=n;j++){
		ans=max(ans,f[j]);
	}
	printf("%d\n",ans);
	return 0;
}
