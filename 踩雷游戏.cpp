#include<bits/stdc++.h>
#include<ctime>
#include<stdio.h>
#include<Windows.h>
using namespace std;

int main(){
	int n1,n2,n3,n4,n5;
	srand(time(NULL));
    int a=rand()%100;
	cout<<"��ӭ����������Ϸ��"<<endl;
	cout<<"����������Ϊ�ĵ�һ����"<<endl;
	cin>>n1;
	if(n1==a){
		cout<<"��������ã��������������"<<endl;
		 return 0;
	}
	if(n1<a){
		cout<<n1<<"��"<<100<<endl;
	}
	if(n1>a){
		cout<<1<<"��"<<n1<<endl;
	}
	cout<<"����������Ϊ�ĵڶ�����"<<endl;
	cin>>n2;
	if(n2==a){
		cout<<"��������ã��������������"<<endl;
		return 0;
	}
	if(n2<n1){
		cout<<n2<<"��"<<n1<<endl;
	}
	if(n2>n1){
		cout<<n1<<"��"<<n2<<endl;
	}
	cout<<"����������Ϊ�ĵ�������"<<endl;
	cin>>n3;
	if(n3==a){
		cout<<"��������ã��������������"<<endl;
		return 0;
	}
	if(n3<n2){
		cout<<n3<<"��"<<100<<endl;
	}
	if(n3>n2){
		cout<<n2<<"��"<<n3<<endl;
	}
	cout<<"����������Ϊ�ĵ��ĸ���"<<endl;
	cin>>n4;
	if(n1==a){
		cout<<"��������ã��������������"<<endl;
		return 0;
	}
	if(n4<n3){
		cout<<n4<<"��"<<n3<<endl;
	}
	if(n4>n3){
		cout<<n3<<"��"<<n4<<endl;
	}
	cout<<"����������Ϊ�ĵ������"<<endl;
	cin>>n5;
	if(n5==a){
		cout<<"��������ã��������������"<<endl;
		 
	}
	else{
		cout<<"��δ�ܲ³���������������"<<a<<endl; 
	}
	return 0;
}
