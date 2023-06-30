#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int i = 0;
        bool f = false;
        if (s[0] == 'Y')
        {
            while (i < n)
            {
                if (i % 3 == 0 and s[i] != 'Y')
                {
                    f = true;
                    cout << "NO\n";
                    break;
                }
                else if (i%3==1 and s[i] != 'e')
                {
                    f = true;
                    cout << "NO\n";
                    break;
                }
                else if (i%3==2 and s[i] != 's')
                {
                    f = true;
                    cout << "NO\n";
                    break;
                }
                i++;
            }
        }
        else if (s[0] == 'e')
        {
            while (i < n)
            {
                if (i % 3 == 0 and s[i] != 'e')
                {
                    f = true;
                    cout << "NO\n";
                    break;
                }
                if (i % 3 == 1 and s[i] != 's')
                {
                    f = true;
                    cout << "NO\n";
                    break;
                }
                if (i % 3 == 2 and s[i] != 'Y')
                {
                    f = true;
                    cout << "NO\n";
                    break;
                }
                i++;
            }
        }
        else if (s[0] == 's')
        {
            while (i < n)
            {
                if (i % 3 == 0 and s[i] != 's')
                {
                    f = true;
                    cout << "NO\n";
                    break;
                }
                if (i % 3 == 1 and s[i] != 'Y')
                {
                    f = true;
                    cout << "NO\n";
                    break;
                }
                if (i % 3 == 2 and s[i] != 'e')
                {
                    f = true;
                    cout << "NO\n";
                    break;
                }
                i++;
            }
        }
        else{
            cout<<"NO\n";
            continue;
        }
        if (!f)
        {
            cout << "YES\n";
        }
    }
}