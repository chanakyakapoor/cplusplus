#include <bits/stdc++.h>
using namespace std;
#define int long long

void dfs(int i, vector<int>& vis, vector<int>* adj){
    vis[i] = 1;
    for(auto it : adj[i]){
        if(!vis[it]){
        	// cout<<it<<" ";
            dfs(it, vis, adj);
        }
    }
}

void solve(){
	int n,m; cin>>n>>m;
    int a, b;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    // for(vector<int> it : adj){
    // 	for(auto i : it){
    // 		cout<<i<<" ";
    // 	}
    // 	cout<<endl;
    // }
    //cond1 cycle (n nodes and n-1 edges)
    bool f=false;
    if(n-1==m){
    	f = true;
    }
    //cond2 1 connected comp

    vector<int> vis(n+1, 0);
    int c=0;
    for(int i=1;i<n;i++){
    	if(!vis[i]){
    		dfs(i, vis, adj);
    		c++;
    		// cout<<i<<" ";
    	}
    }
    // cout<<c;
    if(c==1 and f){
    	cout<<"YES\n";
    }
    else cout<<"NO\n";
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    // int tc;
    // cin >> tc;
    // while (tc--)
    // {
    //     solve();
    //     cout<<endl;
    // }
    solve();
    return 0;
}