#include<iostream>
using namespace std;

int majorityElem(int a[], int n){
    int candidate = a[0];
    int count = 1;

    for(int i=0; i<n; i++){
        if(a[i] == candidate) count++;
        else count--;
    }
}
int main(){
        //incomplete
}


// First pass: find a candidate
// We don’t know for sure if there’s a majority yet.
// We go through the array, increasing/decreasing count to filter out elements that can’t be the majority.
// At the end, candidate is the most likely one, but it’s not guaranteed.

// Second pass: confirm
// Even after filtering, we have to check that this candidate actually appears more than n/2 times.
// That’s why we count again.