#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n; cin>>n; 
    vector<int> v(n); 
    for(int i=0; i<n; i++) cin >> v[i];
    // sort(v.begin(), v.end());
    int sum = accumulate(v.begin(), v.end(), 0ll);
    // int sum = 0;
    // for(int i=0;i<n;i++) sum+=v[i];
    bool bn=false, bp=false, opn=false;
    for(int i=0;i<n-1;i++){
        if(v[i] == -1 and v[i+1] == -1){
            sum+=4;
            cout<<sum<<endl;
            bn=true;
            break;
        }
        else if((v[i] == -1 and v[i+1] == 1) or (v[i] == 1 and v[i+1] == -1)){
            opn = true;
        }
        else if(v[i] == 1 and v[i+1] == 1){
            bp = true;
        }
    }
    if(opn == true and bn == false){
        cout<<sum<<endl;
    }
    else if(bp == true and bn == false){
        cout<<sum-4<<endl;
    }
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
    }
    return 0;
}