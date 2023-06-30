#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n, a, b, sum=0;
        string s;
        cin>>n>>a>>b;
        cin>>s;
        while(n!=0){
            
            if(s[n-1] == '0'){
                sum+=a;
            }
            else sum+=b;
            n--;
        }
        cout<<sum<<endl;
        
    }
}
