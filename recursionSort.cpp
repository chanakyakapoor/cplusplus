#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define ll long long
#define MOD 1000000007
#define srt(v) sort(v.begin(), v.end())
#define gsrt(v) sort(v.begin(), v.end(), greater<int>())
#define fr(i, j, k) for(int i=j;i<k;i++)
#define fer(i, j, k) for(int i=j;i<=k;i++)
#define rf(i, j, k) for(int i=j;i>=k;i--)

void insrt(vector<int>&v, int tmp){

	if(v.size() == 0 or v[v.size()-1] <= tmp){
		v.push_back(tmp); return;
	}

	int ele = v[v.size()-1];
	v.pop_back();


	insrt(v, tmp);
	v.push_back(ele);

}

void sorte(vector<int>& v){

	if(v.size() == 1) return;

	int tmp = v[v.size()-1];

	v.pop_back();

	sorte(v);
	insrt(v, tmp);

}

signed main(){

	vector<int> v{2,3,1,7,6,5,4};

	sorte(v);

	for(auto i:v) cout<<i<<" ";


	return 0;
}