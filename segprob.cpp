#include <bits/stdc++.h>
using namespace std;
#define end cout<<endl

class SEGTree
{
	
public:
	vector<int> seg;
	vector<bool> mark;
	SEGTree(int n){
		seg.resize(4*n);
		mark.resize(4*n, false);
	}
	//tc == O(n)
	void build(int ind, int lo, int hi, vector<int>& nums){
		if(lo==hi){
			seg[ind] = nums[lo];
			mark[ind] = true;
			return;
		}

		int mid = (lo+hi)/2;

		build(2*ind+1, lo, mid, nums);
		build(2*ind+2, mid+1, hi, nums);

		seg[ind] = seg[2*ind+1] + seg[2*ind+2];
		mark[ind] = true;		
	}

	int query(int ind, int lo, int hi, int l, int r){

		//no overlap
		if(r<lo or l>hi) return 0;

		//complete overlap
		if(lo>=l and hi<=r) return seg[ind];

		//else
		int mid = (lo+hi)/2;
		int left = query(2*ind+1, lo, mid, l, r);
		int right = query(2*ind+2, mid+1, hi, l, r);

		return left + right;
	}
	
};

void solve(){

	vector<int> nums(6);
	for(int i=0;i<6;i++){
		cin>>nums[i];
	}

	SEGTree sg(6);
	// SEGTree mark(3);
	sg.build(0, 0, 5, nums);

	for(auto i : sg.seg){
		cout<<i<<" ";
	}
	cout<<endl;
	for(auto i : sg.mark){
		cout<<i<<" ";
	}
	cout<<endl;
	int cnt = 0;
	int lower = 3, upper = 5;
	for(int i=0;i<4*6;i++){
		if(sg.mark[i]){
			if(sg.seg[i] >= lower and sg.seg[i] <= upper) cnt++;
		}
	}
	cout<<cnt;
	return ;
}

signed main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    
    solve();

    return 0;
}