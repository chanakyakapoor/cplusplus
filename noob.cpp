#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long n,k;

	cin>>n>>k;

	if(n%2==0) {cout<<"YES"; return;}

	else if(k&1 && n>=k) {cout<<"YES"; return;}

	cout<<"NO"; return;
}

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    int tc; cin>>tc;
    while(tc--){
    	solve();
		cout<<endl;
    }
    return 0;
}