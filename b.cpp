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
 
    int n; cin >> n;
       int a[n], b[n];
       
       int l = -1 , r = -1, mn = INT_MAX, mx = -1;
       for (int i = 0; i < n; i++)  cin >> a[i];
       for (int i = 0; i < n; i++)  cin >> b[i];
 
       for (int i = 0; i < n; i++) {
         if (a[i] != b[i]) {
           l = i;
           break;
         }
         
       }
       for (int i = n-1; i >= 0; i--) {
         if (a[i] != b[i]) {
           r = i;
           break;
         }
         
       }
       for (int i = l; i <= r; i++) {
         mx = max(mx, a[i]);
         mn = min(mn, a[i]);
       }
 
       
       if (l > 0) {
        for (int i = l-1; i >= 0; i--) {
          if (a[i] <= mn) {
            l--;
            mn = a[i];
          }
          else break;
        }
       }
 
       if (r < n-1) {
        for (int i = r+1; i < n; i++) {
          if (a[i] >= mx) {
            r++;
            mx = a[i];
          }
          else break;
        }
       }
 
       cout << l+1 <<' ' <<r+1;
 
 
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