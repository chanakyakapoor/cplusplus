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

void solve(){
    

    ll n;
    cin>>n;
 
    vector<char> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[n-1]=='1'){
        cout<<"NO"<<endl;
        return;
    }
    vector<ll> ans;
    ll j = n-1;
    while(j>=0){
        ll onesCount = 0;
        ll zeroCount = 0;
        ll tempj = j;
        while(tempj>=0 && arr[tempj]=='0'){
            zeroCount++;
            tempj--;
        }
        while(tempj>=0 && arr[tempj]=='1'){
            onesCount++;
            tempj--;
        }
        
        for(ll k=0;k<zeroCount-1;k++){
            ans.pb(0);
        }
        for(ll k=0;k<onesCount;k++){
            ans.pb(0);
        }
        ans.pb(onesCount);
        j = tempj;
    }
    cout<<"YES"<<endl;
    for(auto el:ans){
        cout<<el<<" ";
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
        cout<<endl;
    }
 
    return 0;
}