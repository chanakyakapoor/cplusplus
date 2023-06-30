#include <bits/stdc++.h>
using namespace std;

#define end cout<<endl
#define lli long long int
#define fero(i, n) for(lli i=1;i<=n;i++)
#define fr(i, n) for(lli i=0;i<n;i++)
#define fer(i, n) for(lli i=0;i<=n;i++)

// lli a[3][3], I[3][3], T[3][3];
lli mod = 1e9+7;
#define N 101
lli a[N][N], I[N][N];
void mul(lli A[][N], lli B[][N], lli dim){
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
void exp(lli A[][N], lli dim, lli n){
	fero(i, dim) fero(j, dim){
		if(i==j) I[i][j] = 1;
		else I[i][j] = 0;
	}
	// fero(i, n) mul(I, A, dim);
	while(n){
		if(n%2) mul(I, A, dim), n--;
		else mul(A, A, dim), n/=2;
	}
	fero(i, dim) fero(j, dim) A[i][j] = I[i][j];

}
void prlliM(lli A[][N], lli dim){
	fero(i, dim){
		fero(j, dim) {
			cout<<A[i][j]<<" ";
		}
		end;
	}
}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    lli tc, dim, n;
    cin>>tc;
    while(tc--){
    	cin>>dim>>n;
    	fero(i, dim) fero(j, dim) cin>>a[i][j];
    	exp(a, dim, n);
    	prlliM(a, dim);
    	// lli n;
    	// cin>>a[1]>>a[2]>>n;
    	// n+=1;
    	// exp(n);
    	// end;
    }
    return 0;
}