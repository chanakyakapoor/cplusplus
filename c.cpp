#include <bits/stdc++.h>
using namespace std;
#define int long long
#define srt(v) sort(v.begin(), v.end())
#define fr(i, j, k) for(int i=j;i<k;i++)
#define rf(i, j, k) for(int i=j;i>=k;i--)


void solve(){


    string s; cin>>s;

    vector<int> v(26,0);

    int n = s.size();

    fr(i,0,n){
        v[s[i]-'a']++;
    }


    int idx = max_element(v.begin(),v.end()) - v.begin();

    int ele = *max_element(v.begin(), v.end());

    char c = (idx+97);

    cout<<idx<<" "<<ele<<endl;

    cout<<c;

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