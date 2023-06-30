#include <bits/stdc++.h>
using namespace std;
// #define int long long
bool a[90000001];
vector<int> primes;
void preprocess(){
    int maxN = 90000001;
    a[0] = a[1] = true;
    for(int i=2;i*i<=maxN;i++){
        if(!a[i]){
            for(int j=i*i;j<=maxN;j+=i) a[j] = true;
        }
    }
    for(int i=2;i<=50;i++){
        // if(!a[i]){
        //     primes.push_back(i);
        // }
        cout<<i<<" "<<a[i]<<endl;
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    int tc;
    cin >> tc;
    preprocess();
    while (tc--)
    {
        int k; cin>>k;
        cout<<primes[k-1];
        cout<<endl;
    }
    return 0;
}