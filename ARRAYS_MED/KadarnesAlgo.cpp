#include<iostream>
#include<climits>
using namespace std;

// maximum subarry sum

int main(){
    int a[] = {-1,2,3,-4,9};
    int currSum = 0;
    int maxSum = INT_MIN;
    int n=5;
    for(int i=0; i<n; i++){
       currSum = currSum + a[i];
       if(currSum > maxSum){
        maxSum = currSum;
       }
       if(currSum < 0){
        currSum = 0;
       }
    }
    cout<<"Maximum subarray sum "<<maxSum;
}

// i	a[i]	currSum before	currSum += a[i]	  currSum after reset if <0	  maxSum updated?	maxSum
// 0	-1	       0	           0 + (-1) = -1	<0 → reset to 0	                 Yes	      -1
// 1	2	       0	           0 + 2 = 2	    >=0 → keep	                     Yes	      2
// 2	3	       2	           2 + 3 = 5	    >=0 → keep	                     Yes	      5
// 3	-4	       5	           5 + (-4) = 1	    >=0 → keep	                     No	          5
// 4	9	       1	           1 + 9 = 10	    >=0 → keep	                     Yes	      10