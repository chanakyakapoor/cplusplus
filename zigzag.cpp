#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> strs = { "car", "flow", "flight" };
    string s;
    int c=0;
    int m = INT_MAX;
    for (int i = 0; i < strs.size()-1; i++){
        c=0;
        for(int j = 0; j < strs[i].size(); j++){
            if (strs[i][j] == strs[i + 1][j])
            {
                c++;
            }
            else break;
        }   
        m= min(m,c);  

    }
    if(m==0) cout<<"0" ;
    else 
    {s = strs[0].substr(0,m);
    cout<<s;
    }
    
}