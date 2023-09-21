#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string sohex="";
		string hex="0123456789ABCDEF";
		long long n;
		cin>>n;
		while(n>0){
			int du=n%16;
			sohex=hex[du]+sohex;
			n/=16;
		}
		cout<<sohex<<endl;
	}
}
