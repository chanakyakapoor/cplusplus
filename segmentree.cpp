#include <bits/stdc++.h>
using namespace std;
#define end cout<<endl

class SEGTree
{
	vector<int> seg;
public:
	SEGTree(int n){
		seg.resize(4*n+1);
	}
	//tc == O(n)
	void build(int ind, int lo, int hi, int arr[]){
		if(lo==hi){
			seg[ind] = arr[lo];
			return;
		}

		int mid = (lo+hi)/2;

		build(2*ind+1, lo, mid, arr);
		build(2*ind+2, mid+1, hi, arr);

		seg[ind] = min(seg[2*ind+1], seg[2*ind+2]);

	}

	//tc == O(logN)
	int query(int ind, int lo, int hi, int l, int r){

		//no overlap
		if(r<lo or l>hi) return INT_MAX;

		//complete overlap
		if(lo>=l and hi<=r) return seg[ind];

		//else
		int mid = (lo+hi)/2;
		int left = query(2*ind+1, lo, mid, l, r);
		int right = query(2*ind+2, mid+1, hi, l, r);

		return min(left, right);
	}

	//tc == O(logN)
	void update(int ind, int lo, int hi, int i, int val){
		if(lo == hi){
			seg[ind] = val; return;
		}

		int mid = (lo+hi)/2;
		if(i<=mid) update(2*ind+1, lo, mid, i, val);
		else update(2*ind+2, mid+1, hi, i, val);

		seg[ind] = min(seg[2*ind+1], seg[2*ind+2]);
	}
};

void solve(){

	int n1; cin>>n1;
	int arr1[n1];
	for(int i=0;i<n1;i++) cin>>arr1[i];
	SEGTree sg1(n1);
	sg1.build(0, 0, n1-1, arr1);

	int n2; cin>>n2;
	int arr2[n2];
	for(int i=0;i<n2;i++) cin>>arr2[i];
	SEGTree sg2(n2);
	sg2.build(0, 0, n2-1, arr2);


	int q; cin>>q;

	while(q--){

		int type; cin>>type;

		if(type == 1){
			int l1, r1, l2, r2;
			cin>>l1>>r1>>l2>>r2;
			int min1 = sg1.query(0, 0, n1-1, l1, r1);
			int min2 = sg2.query(0, 0, n2-1, l2, r2);
			cout<< min(min1, min2);
			end;
		}
		else{
			int arrno, i, val; 
			cin>>arrno>>i>>val;
			if(arrno == 1){
				sg1.update(0, 0, n1-1, i, val);
				arr1[i] = val;
			}
			else{
				sg2.update(0, 0, n2-1, i, val);
				arr2[i] = val;
			}
		}

	}


}

signed main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    
    solve();

    return 0;
}