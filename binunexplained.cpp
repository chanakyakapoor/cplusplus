#include <bits/stdc++.h>
using namespace std;
#define int long long
#define srt(v) sort(v.begin(), v.end())
#define fr(i, j, k) for(int i=j;i<k;i++)
#define rf(i, j, k) for(int i=j;i>=k;i--)


void solve(){
    
    int n, k; cin>>n>>k;

    vector<int> v;

    int i;
    fr(i, 0, n){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int sum = 0;
    vector<int> sumarr(n, 0);

    fr(i, 0, n){
        sum+=v[i];
        sumarr[i] = sum;
    }

    // for(auto it:v) cout<<it<<" ";
    // cout<<endl;

    // for(auto it:sumarr) cout<<it<<" ";
    // cout<<endl;

    fr(i,1,n){

        // cout<<((float)v[i]/sumarr[i-1])*100<<endl;
        
        int x = sumarr[i-1], y = v[i];
        if(((float)y / x)*100 <= k) continue;

        int lo = 1, hi = 1e15, ans=0;

        // cout<<x<<" "<<y;

        while(lo<=hi){

            int mid = lo + (hi-lo)/2;

            if(((float)y / (x+mid))*100 > k){
                lo = mid + 1;
            }

            else{
                ans = mid;
                hi = mid - 1;
            }
        }

        // cout<<lo<<" "<<hi<<" "<<ans<<endl;
        fr(j,i,n){
            sumarr[j]+=ans;
        }
    }

    // cout<<sum<<" "<<sumarr[n-1]<<endl;
    cout<<sumarr[n-1] - sum;
    
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