#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define ll long long
#define MOD 1000000007
#define srt(v) sort(v.begin(), v.end())
#define fr(i, j, k) for(int i=j;i<k;i++)
#define rf(i, j, k) for(int i=j;i>=k;i--)
#define celdv(n, k) (n / k) + ((n % k) != 0)
 
void solve(){
 
    string s;
    cin>>s;
 
    int n = s.size();
    int ans = 1, k = 10, idx = 0;
 
    if(s[0] == '0'){
        cout<<"0"; return;
    }
 
    fr(i,idx,n){
 
        if(i==0 and s[i] == '?'){
 
            ans *= 9;
 
        }
        else if(s[i] == '?'){
 
            ans *= 10;
 
        }
 
    }
    
 
    cout<<ans;
 
 
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