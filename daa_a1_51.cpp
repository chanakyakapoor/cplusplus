#include<bits/stdc++.h>
using namespace std;
long long ans=0;
void solve(int k, int m) {
        int i = 1;
        while(k) {
                if(k <= m) {
                        ans = ans + k*i;
                        k = 0;
                }
                else {
                        if(k > m) {
                                ans = ans + m*i;
                                k-=m; m--;
                        }
                }
                i*=10;
        }
}

int main() {
        int sum; cin >> sum;
        if(sum > 45) {
                cout << "Not Possible\n";
        }
        else {
                solve(sum, 9);
                cout<< ans;
        }
        return 0;
}


