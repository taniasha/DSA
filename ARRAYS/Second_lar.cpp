// Second Largest Element in an Array without sorting

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int largest = INT_MIN;
    int sec_largest = INT_MIN;
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);

    for(int i = 0; i<n; i++){
       if(a[i] > largest){
          sec_largest = largest;
          largest = a[i]; 
       } else if(a[i]>sec_largest && a[i] != largest)
       {
          sec_largest = a[i];
       }
    }


    if(sec_largest == INT_MIN) cout<<"no largest element";
    else cout<<"Sec largest : " <<sec_largest<<", Largest : "<<largest;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
}