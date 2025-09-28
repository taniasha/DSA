#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a[] = {1,2,3,-1,5,-2,9};
    int n = 7;
    int currSum = 0;
    int maxSum = INT_MIN;
    int start =0, end=0, tempStart =0;

    for(int i=0; i<n; i++){
        currSum = currSum + a[i];
        if(currSum > maxSum){
            maxSum = currSum;
            start = tempStart;
            end = i;
        }
        if(currSum<0){
            currSum =0;
            tempStart = i+1;
        }
    }

    cout<<"max subar : "<<maxSum<<endl;
    cout<<"array: ";
    for(int i=start; i<=end; i++){
       cout<<a[i]<<" ";
    }

    return 0;
}