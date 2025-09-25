// left rotate by K elements

#include<iostream>
using namespace std;

void reverseArray(int a[], int start, int end){
    while(start < end){
    swap(a[start], a[end]);
    start++;
    end--;
    }
}
int main(){
    int a[]={1, 2, 3, 4, 5};
    int n =5;
    int d = 2;
     d = d % n; //if d > n

    reverseArray(a, 0, d-1);
    reverseArray(a, d, n-1 );
    reverseArray(a, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}