#include <bits/stdc++.h>
using namespace std;
#define lli long long int
// #define end cout<<endl
 
int mini = 1e8;
bool isPossible(vector<int>&nums, int mid, int n, int k){

    int cnt=0, sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum > mid){
            cnt++;
            sum = 0;
        }
    }
    return cnt >= k;
}

int getMaximumSweetness(vector<int> &nums, int k)
{
    // Write your code here.

    int n = nums.size(), ans = 1;
    int lo = 1, hi = accumulate(nums.begin(), nums.end(), 0);

    while(lo <= hi){
        int mid = (lo + hi) / 2;

        if(isPossible(nums, mid, n, k) == true){
            ans = mid;
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    return ans;

}

 
signed main()
{
    vector<int> nums;
    int n = 9;
    nums = {1,2,2,1,2,2,1,2,2};
    int k = 2;
    cout << getMaximumSweetness(nums, k);
    // int tc;
    // cin >> tc;

    // while (tc--){
    //     solve();
    // }
    return 0;
}
