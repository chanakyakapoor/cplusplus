#include <bits/stdc++.h>
using namespace std;
#define int long long

int parent[100001], rnk[100001];
    
int find_parent(int x){
    if(parent[x] == x) return x;
    return parent[x] = find_parent(parent[x]);
}

void union_set(int a, int b){
    
    int s1 = find_parent(a);
    int s2 = find_parent(b);
    if(s1 == s2) return;
    if (s1 != s2)
    {
        if (rnk[s2] < rnk[s1])
        {
            parent[s2] = s1;
            rnk[s1] += rnk[s2];
        }
        else
        {
            parent[s1] = s2;
            rnk[s2] += rnk[s1];
        }
    }
}


void solve(){

    int n, m, p;
    cin>>n>>m>>p;

    string br;
    cin>>br;

    string dir;
    cin>>dir;

    int i=0, j=0;
    stack<int> st;

    while(j<n){

        if(st.empty()){
            i = j;
        }

        parent[j+1] = i+1;

        if(br[j] == '('){
            st.push(1);
        }

        else if(br[j] == ')') st.pop();

        j++;

    }

    for(int i=1;i<=n;i++){
        cout<<parent[i]<<" ";
    }


    for(i=0;i<m;i++){

        if(dir[i] == 'R'){
            p++;
        }

        else if(dir[i] == 'L'){
            p--;
        }

        else {

            find_parent(p);
            if(p+1 < n){
                p++;
            }
            else p--;

        }

    }



}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    // int tc;
    // cin >> tc;
    // while (tc--)
    // {
        solve();
        cout<<endl;
    // }
    return 0;
}