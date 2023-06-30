#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int o = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] == 1) o++;
        }
        int ans = 0;
        if (o % 2 == 0)
        {
            ans = o / 2;
            int res = 0;
            res = ans + n - o;
            cout<<res<<endl;
        }
        else
        {
            ans = o / 2 + 1;
            int res = 0;
            res = ans + n - o;
            cout<<res<<endl;
        }
    }
    return 0;
}