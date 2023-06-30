#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        set<int> s1;
        set<int> s2;
        int x=0, y=0;
        for(int i=a+1;i<=c;i++){
            s1.insert(i);
        }
        for(int i=b+1;i<=d;i++){
            s2.insert(i);
        }
        // for(auto i=s1.begin();i!=s1.end();i++){
        //     cout<<*i<<" ";
        // }
        cout<<endl;
        int pr = a*b;
        bool f = false;
        for(auto i=s1.begin();i!=s1.end();i++){
            int tf = 0;
            if(pr%(*i) == 0){
                tf = pr/(*i);
                x = *i;
                for(auto j=s2.begin();j!=s2.end();j++){
                    if(*j%tf == 0){
                        f = true;
                        y = *j;
                        break;
                    }
                }
            }
            if (f) break;
        }
        cout<<"ans -- ";
        if(f == false){
            cout<<"-1 -1"<<endl;
        }
        else cout<<x<<" "<<y<<endl;
    }
    return 0;
}