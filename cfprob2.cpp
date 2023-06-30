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

bool cmp(const pair<int, int>& a, const pair<int, int>& b){
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}

void solve(){
    
    
    int n; cin>>n;
    vector<int>a(n+1), b(n+1);

    map<int, vector<int>>mp;

    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i];
        mp[a[i]].emplace_back(b[i]);
    }

    fer(i,1,n){
        sort(mp[i].begin(), mp[i].end(), greater<int>());
    }

    int rew = 0;

    fer(i,1,n){
        for(int j=0;j<i and j<mp[i].size();j++){
            rew+=mp[i][j];
        }
    }

    cout<<rew;

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