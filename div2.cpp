#define ll long long
#define f(i,a,b)    for(int i=a;i<b;i++)
#include<bits/stdc++.h>
using namespace std;
 
void maxi(vector<int>&a,int &k){
   int ans=INT_MIN;
   f(i,0,a.size()){
      if(a[i]>ans){
         ans=a[i];
         k=i;
      }
   }
}
void mini(vector<int>&a,int &r){
   int ans=INT_MAX;
   f(i,0,a.size()){
      if(a[i]<ans){
         ans=a[i];
         r=i;
      }
   }
}
void solve(){
   int n; cin>>n;
   vector<int>a(n);
   f(i,0,n){
      cin>>a[i];
   }
   vector<pair<int,int>>vans;
   vector<int>temp=a;
   sort(temp.begin(),temp.end());
   if(temp[0]==temp[n-1])
   {
       cout<<0<<endl;
       return;
 
    }
    if(temp[0]==1){
      cout<<-1<<endl;
      return;
    }
    int i=0;
    while(i<30*n){
      int k=-1;
      maxi(a,k);
 
      int r=-1;
      mini(a,r);
      if(a[r]==1) {cout<<-1<<endl; return;}
      if(a[k]==a[r]) break;
      vans.push_back({k+1,r+1});
      if(a[k]%a[r]==0) a[k]=a[k]/a[r];
      else a[k]=a[k]/a[r]+1;
    }
    cout<<vans.size()<<endl;
    for(auto it:vans){
      cout<<it.first<<" "<<it.second<<endl;
    }
 
 
   
  } 
int main()
{
int t;
cin>>t;
while(t--){
   
 solve();
   
}
      return 0;
}