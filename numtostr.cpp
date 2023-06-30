#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 2375, maxe, idx=0;
    maxe = n;
    string str = to_string(n);
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            string s = to_string(n);
            swap(s[j], s[i]);
            if (stoi(s) > maxe) maxe = stoi(s);
        }
    }
    cout << maxe;
}