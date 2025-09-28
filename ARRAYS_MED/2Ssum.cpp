#include<iostream>
using namespace std;

// brute force for 2 sum problem --- complexity n2

int main(){
    int a[] = {1,2,3,1,5};
    int target = 3;
    int n = sizeof(a)/sizeof(int);

    for(int i=0; i<n; i++){
       for(int j=i+1; j<n; j++){
        if(a[i]+a[j] == target){
           cout<<"ans"<<i<<j;
        }
       }
    }
    return 0;
}