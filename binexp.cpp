#include <bits/stdc++.h>
using namespace std;
#define lli long long int
const long long int mod = 1e9+7; 
//if b is large 
double power(double a, int n){
    double res = 1;
    while(n){
    	if(n%2) {
               res=(res*a); n--;
               cout<<"res -- "<<res<<" "<<n<<endl;
           }
    	else {
               a=(a*a); n/=2;
               cout<<"a -- "<<a<<" "<<n<<endl;
           }
    }
    return res;
}

// if a and mod is of range 10^18 so a*a will overflow 
// lli helper(lli a, lli n){
// 	lli ans = 0;
// 	while(n){
// 		if(n%2) ans=(ans+a)%mod, n--;
// 		else a=(a+a)%mod, n/=2;
// 	}
// 	return ans;
// }


// lli power(lli a, lli n){
// 	lli res = 1;
// 	while(n){
// 		if(n%2) res=helper(res,a), n--;
// 		else a=helper(a,a), n/=2;
// 	}
// 	return res;
// }

signed main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    // lli a, n;
    // cin>>a>>n;
    // cout<<power(a, n);
    double x = 2.00000;
    int n = -2;
    int ans = power(x, abs(n));
    if(n<0){
    	cout<<(double)1/ans;
    }
    else cout<<ans;

    // 50 ^ 64 ^ 32
    //power(50, power(64, 32, m-1), m) --> m is prime number (mod)
    return 0;
}