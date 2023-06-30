#include<bits/stdc++.h>
using namespace std;
int main(){
    int start[] = {1, 3, 0, 5, 8, 5};
    int end[] = {2, 4, 6, 7, 9, 9};
    int n = 6;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(end[i], end[i] - start[i]));
    }

    sort(v.begin(), v.end());

    for(auto const& v : v){
        cout<<v.first<<" "<<v.second<<endl;
    }
}