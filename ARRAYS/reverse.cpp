#include<iostream>
using namespace std;

void ReverseAnArray(int arr[], int size){
    int start = 0;
    int end = size-1;
     while(start < end){
          swap(arr[start], arr[end]);
          start++;
          end--;
     }
}
int main(){
         int arr[] = {1,2,4,6};
         int size = sizeof(arr)/sizeof(int);
         ReverseAnArray(arr, size);
         for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
         }
}