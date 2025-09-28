// remove duplicate from sorted array

#include<iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,4,2,2};
    int n = sizeof(a)/sizeof(int);
    int count = 0;

    for(int i=0; i<n; i++){
        if(a[i]>1){
            count ++;
        }
    }

    for(int j=0;j<n;j++){cout<<a[j]<<" "; }
    return 0;
}