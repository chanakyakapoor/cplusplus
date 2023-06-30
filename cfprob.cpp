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
#define celdv(n, k) (n / k) + ((n % k) != 0)
#define pb push_back

// int a[4] = {0,1,0,-1};
// int b[4] = {-1,0,1,0};

int n;
vector<int> a;
vector<int> b;

void take_input(int n, vector<int>&v){
    v.resize(n+1);
    fr(i,0,n){
        cin>>v[i];
    }
}

vector<string> v;
int maxi = -1e8, mini = 1e8;
int f(int i, int m, int s, string str, vector<vector<int>>& dp){

    if(i==m){
        if(s==0){
            v.push_back(str);
            return 1;
        }
        return 0;
    }

    if(dp[i][s] != -1){
        return dp[i][s];
    }

    int res = 0;

    if(i==0){

        fr(j,1,10){
            if(s-j >=0){
                res = f(i+1, m, s-j, str+to_string(j), dp);
            }
        }

    }

    else{

        fr(j,0,10){
            if(s-j >=0){
                res = f(i+1, m, s-j, str+to_string(j), dp);
            }
        }
    }

    return dp[i][s] = res;

}

void solve(){

    int m, s;
    cin>>m>>s;

    vector<vector<int>> dp(m+1, vector<int>(s+1, -1));

    f(0, m, s, "", dp);
    

    int t = v.size();

    if(t == 0){
        cout<<"-1 -1\n"; return;
    }

    srt(v);
    cout<<v[0]<<" "<<v[t-1]<<endl;

    

}


signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    // int tc;  cin>>tc;

    // while(tc--){
        solve();
    //     cout<<endl;
    // }
 
    return 0;
}