#include <bits/stdc++.h>
using namespace std;
int a[1000001];
void seive(){
    int maxN = 10000000;
    for(int i=1;i<=maxN;i++) a[i] = -1;
    for(int i=2;i<=maxN;i++){
        if(a[i] = -1){
            for(int j=i;j<=maxN;j+=i){
                if(a[j] = -1){
                    a[j] = i;
                }
            }
        }
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    seive();
    return 0;
}