#include<bits/stdc++.h>
using namespace std;
int main(){
stack<int> stack;
string s = "([{{{}}}])";
for (int i = 0; i < s.length(); i++)
{
    if (s[i] == '{' || s[i] == '(' || s[i] == '[')
        stack.push(s[i]);
    else if (stack.top() == '{' && s[i] == '}' || stack.top() == '(' && s[i] == ')' || stack.top() == '[' && s[i] == ']')
    {
        stack.pop();
    }
    else{
        cout << "false";
        break;
    }
}
if (stack.empty())
    cout << "true";
    
}