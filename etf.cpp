#include <bits/stdc++.h>
using namespace std;

#define end cout<<endl
int phi(int n){
	int res = n;

	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			res*=(i-1);
			res/=i;

			while(n%i == 0){
				n/=i;
			}
		}
	}
	if(n>1) res*=(n-1), res/=n;
	return res;
}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    int n; cin>>n;
    cout<<phi(n);
}