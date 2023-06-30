#include <bits/stdc++.h>
using namespace std;

#define end cout<<endl
#define lli long long int
#define fero(i, n) for(lli i=1;i<=n;i++)
#define fr(i, n) for(lli i=0;i<n;i++)
#define fer(i, n) for(lli i=0;i<=n;i++)

lli a[3], I[3][3], T[3][3];
lli mod = 1e9+7;
#define N 101
void mul(lli A[3][3], lli B[3][3], lli dim){
	lli res[dim+1][dim+1];
	fero(i, dim){
		fero(j, dim){
			res[i][j] = 0;
			fero(k, dim){
				lli x = (A[i][k] * B[k][j])%mod;
				res[i][j] = (res[i][j] + x)%mod;
			}
		}
	}
	fero(i, dim) fero(j, dim) A[i][j] = res[i][j];
}
lli exp(lli n){
	if(n<=2) return a[n];
	fero(i, 2) fero(j, 2){
		if(i==j) I[i][j] = 1;
		else I[i][j] = 0;
	}

	T[1][1] = 0;
	T[1][2] = T[2][1] = T[2][2] = 1;

	n=n-1;

	while(n){
		if(n%2) mul(I, T, 2), n--;
		else mul(T, T, 2), n/=2;
	}

	lli x = (a[1] * I[1][1] + a[2] * I[2][1])%mod;

	return x;
}

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    lli tc, n;
    cin>>tc;
    while(tc--){
    	cin>>a[1]>>a[2]>>n;
    	n+=1;
    	cout << exp(n);
    	end;
    }
    return 0;
}