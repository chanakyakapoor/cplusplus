#include <bits/stdc++.h>
using namespace std;
#define lli long long int

const int maxN = 9;
vector<int> adj[1001];

int level[1001], lca[1001][maxN+1];

void dfs(int node, int par, int lvl)
{
    level[node] = lvl;
    lca[node][0] = par;

    for(int child : adj[node]){
    	if(child != par){
    		dfs(child, node, lvl+1);
    	}
    }
}

void init(int n){

	dfs(1, -1, 0);

	for(int j=1;j<=maxN;j++){
		for(int i=1;i<=n;i++){

			if(lca[i][j-1] != -1){
				int par = lca[i][j-1];
				lca[i][j] = lca[par][j-1];
			}
		}
	}
	
}

int LCA(int a, int b){

	if(level[a] > level[b]) swap(a, b);

	int d = level[b] - level[a];

	while(d>0){
		int i = log2(d);
		b = lca[b][i];
		d-=(1<<i);
	}

	if(a==b) return a;

	for(int i=maxN;i>=0;i--){
		if(lca[a][i] !=-1 and lca[a][i] != lca[b][i]){
			a = lca[a][i], b = lca[b][i];
		}
	}

	return lca[a][0];

}

signed main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif

    int n, a, b, q;

    cin>>n;

    // maxN = log2(n);

    for(int i=1;i<n;i++){
    	cin>>a>>b;

    	adj[a].push_back(b);
    	adj[b].push_back(a);

    }

    for(int i=1;i<=n;i++){
    	for(int j=0;j<=maxN;j++){

    		lca[i][j] = -1;

    	}
    }

	init(n);
	cout << LCA(7, 8);
	// cout<<endl;
    return 0;
}
