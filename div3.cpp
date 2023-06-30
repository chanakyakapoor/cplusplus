#include <bits/stdc++.h>
using namespace std;
// #define int long long int
#define ll long long
#define MOD 1000000007
#define srt(v) sort(v.begin(), v.end())
#define gsrt(v) sort(v.begin(), v.end(), greater<int>())
#define fr(i, j, k) for(int i=j;i<k;i++)
#define fer(i, j, k) for(int i=j;i<=k;i++)
#define rf(i, j, k) for(int i=j;i>=k;i--)
#define celdv(n, k) (n / k) + ((n % k) != 0)
#define pb push_back

void add_edge(int x, int y, vector<int> adj[]){

    adj[x].push_back(y);
    adj[y].push_back(x);
}

vector<int> ans;

void dfs(vector<int> adj[], int node, int parent)
{
 
    for (auto ir : adj[node]) {
 
        if (ir != parent) {
            dfs(adj, ir, node);
            ans[node] += ans[ir];
        }
    }

    if(ans[node]==0) ans[node]=1;
}

void solve(){
    int n;
    cin>>n;

    vector<int> adj[n+1];

    int x, y;

    fr(i,0,n-1){
        cin>>x>>y;
        add_edge(x, y, adj);
    }

    vector<int> vis(n+1, 0);

    ans.clear();
    ans.resize(n+1, 0);

    dfs(adj, 1, -1);
    
    int query; cin>>query;

    while(query--){

        int a, b;
        cin>>a>>b;

        int res = ans[a] * ans[b];
        cout<<res<<endl;

    }

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
    }
 
    return 0;
}