#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k = 3;
    vector<vector<int>>mat =
        { { 1, 1, 0, 0, 0 },
          { 1, 1, 1, 1, 0 },
          { 1, 0, 0, 0, 0 },
          { 1, 1, 0, 0, 0 },
          { 1, 1, 1, 1, 1 } };
    vector<pair<int, int>> ans;
    vector<int> v;
    int cnt = 0;
    for (int i = 0; i < mat.size(); i++)
    {
        cnt = 0;
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (mat[i][j] == 1)
            {
                cnt++;
            }
        }
        ans.push_back(make_pair(cnt,i));
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < k; i++)
    {
        v.push_back(ans[i].second);
    }

    for(auto v:v){
        cout<<v<<"\t";
    }
}