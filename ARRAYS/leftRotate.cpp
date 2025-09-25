#include<iostream>
using namespace std;

//left rotate by one place 

int main(){
    int a[] = {1,2,3,4,5};
    int n = 5;
    int temp = a[0];
    for(int i=0; i<n; i++){
        a[i] = a[i+1];
    }
        a[n-1] = temp;

    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
}