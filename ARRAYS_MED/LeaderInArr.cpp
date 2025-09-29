// An element is called a leader if it is strictly greater than all elements to its right.
// The rightmost element is always a leader.

#include<iostream>
using namespace std;

int main(){
    int a[] = {16, 17, 8 , 9 ,2};
    int n=5;

    int maxFromRight = a[n-1]; //last element
    cout<<maxFromRight<<" ";

    for(int i = n-2; i>=0; i--){
        if(a[i] > maxFromRight){
            maxFromRight = a[i];
            cout<<maxFromRight<<" ";
        }
    } 
    return 0;
}