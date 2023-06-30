#include <bits/stdc++.h>
using namespace std;
#define lli long long int


vector<bool> arr;
vector<int> primes;
int dist[100001], vis[100001];
vector<int> adj[100001];



bool chkr(int a, int b){

	int cnt = 0;

	while(a>0){

		if(a%10 != b%10) cnt++;

		a/=10, b/=10;

	}

	return cnt == 1;
}

bool isPrime(int n){

	for(int i=2;i*i<=n;i++){
		if(n%i == 0) return false;
	}
	return true;
}
void buildGraph(){
	for(int i=1000;i<=9999;i++){
		if(isPrime(i)) primes.push_back(i);
	}

	for(int i=0;i<primes.size();i++){
		for(int j=i+1;j<primes.size();j++){
			if(chkr(primes[i], primes[j])){
				adj[primes[i]].push_back(primes[j]);
				adj[primes[j]].push_back(primes[i]);
			}
		}
	}
}

void bfs(int src){

	queue<int> q;
	q.push(src);
	dist[src] = 0;
	vis[src] = 1;

	while(!q.empty()){

		int node = q.front();
		q.pop();

		for(auto i : adj[node]){
			if(vis[i] == 0){
				
				vis[i] = 1;
				dist[i] = dist[node] + 1;
				q.push(i);
				
			}
		}
	}
}

void solve(){

	int a, b; cin>>a>>b;

	//a --> b
	//arr[a] == 0 ==>> PRIME

	if(a==b) {
		cout<<0;
		return;
	}

	for(int i=1000;i<=9999;i++) dist[i] = -1, vis[i] = 0;
	

	bfs(a);

	if(dist[b] == -1){
		cout<<"Impossible";
		return;
	}

	cout<<dist[b];

}


signed main()
{
	int tc; cin>>tc;

	buildGraph();

	while(tc--){

		solve();
		cout<<endl;

	}

    return 0;
}