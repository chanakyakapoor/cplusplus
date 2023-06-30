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
// vector<int> b;

// void take_input(int n, vector<int>&v){
//     v.resize(n+1);
//     fr(i,0,n){
//         cin>>v[i];
//     }
// }

// bool isPalin(string a, string b){

//     int n = a.size(), m = b.size();

//     int i=0, j=m-1;

//     while(i<=j){
//         if(a[i] != b[j]){
//             return false;
//         }
//         i++, j--;
//     }

//     return true;

// }

void solve(){

    
    cin>>n;
    a.resize(10,1);

    int k = 1, x = 0;

    while(k<n){
        int j = a[x%10];
        k = k/j;
        a[x%10]++;
        j++;
        k=k*j;
        x++;
    }

    string str = "codeforces";
    fr(i,0,10){
        fr(j,0,a[i]){
            cout<<str[i];
        }
    }

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