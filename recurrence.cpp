#include<bits/stdc++.h>
using namespace std;
void test(int n){
	if(n>0){
		cout<<n<<endl;
		test(n-1);
		test(n-1);
	}
}
int main(){
	test(3);
	return 0;
}

