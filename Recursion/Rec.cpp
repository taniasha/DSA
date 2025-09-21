#include<iostream>
using namespace std;

void printHello(int n){
    if(n==0) return;

    cout<<"Hey "<<endl;
    printHello(n-1);
}

int main(){
    int n = 3;

    printHello(n);

    return 0;
}

// Function Call	n Value 	Condition Check	        Action	          Next Call
// printHello(3)	 3	         3 == 0 → false	      print "Hey hello"	    printHello(2)
// printHello(2)	 2	         2 == 0 → false	      print "Hey hello"	    printHello(1)
// printHello(1)	 1	         1 == 0 → false	      print "Hey hello"	    printHello(0)
// printHello(0)	 0	         0 == 0 → true	      return;	            stops recursion