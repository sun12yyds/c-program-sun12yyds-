#include<bits/stdc++.h>
#include<ctime>
#include<stdio.h>
#include<Windows.h>
using namespace std;

int main(){
	int n1,n2,n3,n4,n5;
	srand(time(NULL));
    int a=rand()%100;
	cout<<"欢迎来到踩雷游戏！"<<endl;
	cout<<"请输入你认为的第一个数"<<endl;
	cin>>n1;
	if(n1==a){
		cout<<"你运气真好，猜中了这个数！"<<endl;
		 return 0;
	}
	if(n1<a){
		cout<<n1<<"到"<<100<<endl;
	}
	if(n1>a){
		cout<<1<<"到"<<n1<<endl;
	}
	cout<<"请输入你认为的第二个数"<<endl;
	cin>>n2;
	if(n2==a){
		cout<<"你运气真好，猜中了这个数！"<<endl;
		return 0;
	}
	if(n2<n1){
		cout<<n2<<"到"<<n1<<endl;
	}
	if(n2>n1){
		cout<<n1<<"到"<<n2<<endl;
	}
	cout<<"请输入你认为的第三个数"<<endl;
	cin>>n3;
	if(n3==a){
		cout<<"你运气真好，猜中了这个数！"<<endl;
		return 0;
	}
	if(n3<n2){
		cout<<n3<<"到"<<100<<endl;
	}
	if(n3>n2){
		cout<<n2<<"到"<<n3<<endl;
	}
	cout<<"请输入你认为的第四个数"<<endl;
	cin>>n4;
	if(n1==a){
		cout<<"你运气真好，猜中了这个数！"<<endl;
		return 0;
	}
	if(n4<n3){
		cout<<n4<<"到"<<n3<<endl;
	}
	if(n4>n3){
		cout<<n3<<"到"<<n4<<endl;
	}
	cout<<"请输入你认为的第五个数"<<endl;
	cin>>n5;
	if(n5==a){
		cout<<"你运气真好，猜中了这个数！"<<endl;
		 
	}
	else{
		cout<<"你未能猜出这个数，这个数是"<<a<<endl; 
	}
	return 0;
}
