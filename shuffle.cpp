#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, num,ctr=0, sum = 0;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            v.push_back(num);
        }
        int i=0;
        while(i< (n-1))
        {   
            if (v[i] % 2 == 0 && v[i + 1] % 2 != 0 || v[i + 1] % 2 == 0 && v[i] % 2 != 0)
            {
                sum += 2;
                i+=2;
                ctr+=2;
            }
            else{
                sum += ((v[i] + (i+1)) % 2);
                i++;
                ctr++;
            }
        
        }
        if (n % 2 == 0)
        {
            if(ctr<n){
                sum+=((v[n-1] + (n)) % 2);
            }
            cout << sum << endl;
        }
        else
        {
            sum += ((v[n-1] + (n)) % 2);
            cout << sum << endl;
        }
    }
}
