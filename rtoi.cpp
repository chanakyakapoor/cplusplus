#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int, string> m;
    int n = 1994;
    int num;
    int o;
    o = n;
    string s="";
    m[1] = "I";
    m[4] = "IV";
    m[5] = "V";
    m[9] = "IV";
    m[10] = "X";
    m[40] = "XL";
    m[50] = "L";
    m[90] = "XC";
    m[100] = "C";
    m[400] = "CD";
    m[500] = "M";
    m[900] = "CM";
    m[1000] = "M";
    int t;
    int r = to_string(n).length()-1;
    while (n)
    {
        num = o%(int)(pow(10,r)); 
        if(o == num) t = num;   
        else t = o - num;
        s.append(m[t]);
        n=n/10;
        r--;
        o=num;
    }
    
    cout<<s;
    
}