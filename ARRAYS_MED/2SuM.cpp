// optimized version of the code;

//  2pointer approach --- 2sum problem

#include<iostream>
using namespace std;

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    int target = 9;
    int start = 0;
    int end = n-1;
    while(start < end){
        int sum = a[start] + a[end];
        if(sum == target){
            cout<<"Indices : "<<start<<", "<<end;
            break;
        }else if(sum < target){
            start++;
        }else{
            end--;
        }
    }
    return 0;
}