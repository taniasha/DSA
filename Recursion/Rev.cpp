#include<iostream>
using namespace std;

void array(int a[], int n){
    if(n==0) return;
    cout<<a[n-1]; //array indices go from 0 to n-1 , so last elem will be at n-1 index
    array(a, n-1);
}
int main(){
    int a[] = {1,2,3,4};
    int n = sizeof(a)/sizeof(int);
    array(a,n);
    return 0;
}