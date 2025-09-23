#include<iostream>
using namespace std;

int main(){

    int a[]= {1,2,3,7};
    int n = sizeof(a)/sizeof(int);
    bool sorted = true;

    for(int i=0; i<n-1; i++){   // if we do for(int i=0; i<n; i++)
       if(a[i]>a[i+1]){         // then a[i]>a[i+1] -----  this cuase when i<n mean i=n-1 
        sorted = false;         // a[n-1] > a[n-1+1] ----- a[n-1] > a[n] and ,a[n] cause out of bound index]
        break;
       }
       sorted = true;
    }

    if(sorted) cout<<"sorted";
    else cout<<"not";

    return 0;
}