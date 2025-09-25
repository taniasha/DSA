// find missing number in an array

#include<iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,4,6};
    int n = 6;
    int sum = 0;
    
    for(int i=0; i<n-1; i++){ // i<n will not work as i<6 i.e. i=5 will not work as size will work from 0 to 4 as one elem is missing
        sum = sum + a[i];
    }
     int total = n*(n+1)/2;
     int missing = total - sum;
     cout<<"Missing number : "<<missing;
    return 0;
}