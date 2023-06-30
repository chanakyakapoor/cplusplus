//end point of brodge is an articulation point(AP) if that 
//node has degree greater than 2

//it is not necessary for an AP to an end point of a bridge


#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10001];
int in[10001], low[10001], vis[10001];
int timer;

void dfs(int node, int par){


	vis[node] = 1;
	in[node] = low[node] = timer;
	timer++;

	for(auto to : adj[node]){

		if(to == par) continue;

		if(vis[to] == 1) //back edge
		{

			low[node] = min(low[node], in[to]);

		}
		else //forward edge
		{

			dfs(to, node);

			if(low[to] > in[node]){
				cout<<node<<" - "<<to<<" is a bridge\n";
			}

			low[node] = min(low[node], low[to]);
		}
	}

}


void solve(){

	int n, m, x, y;
	cin>>n>>m;

	while(m--){

		cin>>x>>y;
		adj[x].push_back(y), adj[y].push_back(x);

	}

	dfs(1, -1);

}

signed main()
{
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