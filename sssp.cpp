#include <bits/stdc++.h>
using namespace std;
// #define int long long
void solve(){
    int n; cin>>n;
    int a, b;
    vector<int> adj[n+1];
    for(int i=0;i<n-1;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    queue<pair<int, int>> pq;
    int s = 1;
    vector<int> dist(n+1, 1e9);
    dist[1] = 0;
    pq.push({s, 0});

    while(!pq.empty()){
        pair<int, int> p = pq.front();
        int node = p.first;
        pq.pop();
        for(auto it : adj[node]){
            int next = it;
            if(dist[next] > 1 + dist[node]){
                dist[next] = 1 + dist[node];
                pq.push({next, dist[next]});
            }
        }
    }
    for(auto i : dist){
        cout<<i<<" ";
    }
    int q, mini = 1e9, idx; 
    cin>>q;
    while(q--){
        int y; cin>>y;
        if(dist[y] < mini){
            mini = dist[y];
            idx = y;
        }
    }
    cout<<idx<<" ";
}
signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}