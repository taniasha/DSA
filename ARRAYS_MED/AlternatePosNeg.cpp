// Rearrange the array in alternating positive and negative items

#include<iostream>
using namespace std;
// Step 1: Partition

 void AlternatePosNeg(int a[], int n){
      int i = 0; int j = n-1;
      while(i<j){
          while(i <n && a[i] >= 0) i++;
          while(j >= 0 && a[j] < 0) j--;
          if(i<j) swap(a[i],a[j]);
      }

// Step 2: Swap alternate +ve and -ve

      int pos = 0;  // start index for positives
      int neg = i;  // start index for negatives

      while(pos < neg && neg < n && a[pos] >= 0){
        swap(a[pos], a[neg]);
        pos = pos + 2;
        neg++;
      }
 }

int main(){
    int a[] ={2, 3, -4, -1, 6, -9};
    int n = sizeof(a)/sizeof(int);
    AlternatePosNeg(a, n);
    cout<<"Array is: ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}