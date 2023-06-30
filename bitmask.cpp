#include <bits/stdc++.h>
using namespace std;
#define end cout<<endl

void printBinary(int n){
	for(int i=10;i>=0;i--){
		cout<<((n>>i) & 1);
	}
}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    printBinary(9);
    int a=9, i=3;
    if((a&(1<<i))!=0){
    	cout<<" set bit\n";
    }
    else cout<<" unset bit\n";

    //set bit
    i=4;
    printBinary(a | (1<<i));
    end;

    //unset bit
    i=3;
    printBinary(a&(~(1<<i)));
    end;

    //toggle
    i=2;
    printBinary(a^(1<<i));
    end;

    //set bit count
    int c=0;
    for(int i=10;i>=0;i--){
    	if((a&(1<<i))!=0){
    		c++;
    	}
    }
    cout<<c;
    end;

    //clear i LSBs
    a=59;
    printBinary(a);end;
    i=4;
    int b = (a & (~((1<<(i+1)) - 1)));
    printBinary(b);
    end;

    //clear MSBs from i
    i=3;
    int u = (a & ((1<<(i+1)) - 1));
    printBinary(u);
    end;

    //check if power of 2
    int n = 15;
    if(n&(n-1)){
    	cout<<"not power of 2\n";
    }
    else cout<<"power of 2\n";

    //XOR same -- 0 and diff -- 1, x^0 = x and x^x = 0
    int x = 4, y = 6;
    x = x^y;
    y = y^x;
    x = x^y;


    
    return 0;
}