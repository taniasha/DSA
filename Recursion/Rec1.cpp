// Print 1 to N using recursion

#include<iostream>
using namespace std;

void printNumbers(int n){
    if(n==0) return; //base case

    printNumbers(n-1);

    cout<<n;
}
int main(){
    int n= 5;
    printNumbers(n);
}


// Call	                 Action	         Output
// printNumbers(5)  	call → (4)	    -
// printNumbers(4)  	call → (3)	    -
// printNumbers(3)	    call → (2)	    -
// printNumbers(2)  	call → (1)	    -
// printNumbers(1)  	call → (0)	    -
// printNumbers(0)  	base → return	-
// return from 1	    print  1      	1
// return from 2	    print  2	    1 2
// return from 3	    print  3	    1 2 3
// return from 4	    print  4	    1 2 3 4
// return from 5	    print  5     	1 2 3 4 5