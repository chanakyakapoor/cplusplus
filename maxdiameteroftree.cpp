//run dfs two times
//any node to maxnode and then from that maxnode to other end of diameter

#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int maxi, maxnode;
vector<int> adj[10001];
int vis[10001];

void dfs(int i, int cnt){
	vis[i] = 1;
	if(cnt > maxi) maxi = cnt, maxnode = i;
	for(auto it : adj[i]){
		if(!vis[it]){
			dfs(it, cnt+1);
		}
	}
}

void solve(){

	int n; cin>>n;

	int a, b;
	for(int i=0;i<n-1;i++){
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	// vis.resize(10001, 0);
	maxi=-1;

	dfs(1, 0);

	for(int i=0;i<10001;i++){
		vis[i] = 0;
	}

	maxi = -1;

	dfs(maxnode, 0);

	cout<<maxi;
}

signed main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif

	solve();
	cout<<endl;
    return 0;
}
