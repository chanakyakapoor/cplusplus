#include <bits/stdc++.h>
using namespace std;
// #define lli long long int

vector<int> adj[1000001];
vector<pair<int, int>> stre;
int dist[1000001];
int vis[1000001];
void bfs(int x){

	queue<int> q;
	q.push(x);
	dist[x] = 0;
	vis[x] = 1;

	while(!q.empty()){
		int node = q.front();
		q.pop();

		for(auto it : adj[node]){
			if(!vis[it]){
				vis[it] = 1;
				dist[it] = dist[node] + 1;
				q.push(it);
			}
		}
	}
}

void solve(){

	int n, k; cin>>n>>k;

	int a, b;
	string r;

	stre.clear();

	for(int i=0;i<k;i++){

		cin>>a; cin>>r; cin>>b;

		if(r == "="){

			adj[a].push_back(b);
			adj[b].push_back(a);

		}
		else{
			stre.push_back({a, b});
		}
	}


	bool flag = true;
	for(auto [x,y] : stre){
		memset(dist, -1, sizeof dist);
		memset(vis, 0, sizeof vis);
		bfs(x);
		if(dist[y] != -1){
			flag = false;
			break;
		}

	}

	if(flag) cout<<"YES";
	else cout<<"NO";

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