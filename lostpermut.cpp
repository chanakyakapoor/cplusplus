#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--){
        int n, m;
        cin >> n >> m;
        int arr[n];
        set<int> st;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            st.insert(arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (maxi < arr[i])
                maxi = arr[i];
        }
        int num = 1;
        int sum = 0;
        while (num)
        {
            if (st.find(num) != st.end())
            {
                num++;
                continue;
            }
            sum += num;
            if (sum > m)
            {
                cout << "NO" << endl;
                break;
            }
            st.insert(num);
            if (sum == m)
            {
                int temp = 0;
                for (int k = 1; k <= maxi; k++)
                {
                    if (st.find(k) != st.end())
                        continue;
                    temp = 1;
                    break;
                }
                if (!temp)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
                break;
            }
            num++;
        }
        // int m, s;
        // cin>>m>>s;
        // int num, sum=0;
        // for(int i=0;i<m;i++){
        //     cin>>num;
        //     sum+=num;
        // }
        // sum+=s;
        // int i=1;
        // while(sum>0){
        //     sum-=i;
        //     i++;
        // }  
        // if(sum==0){
        //     cout<<"Yes\n";
        // }      
        // else{
        //     cout<<"No\n";
        // }
    }
}