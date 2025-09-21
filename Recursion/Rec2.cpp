// Sum of first N numbers
#include<iostream>
using namespace std;

int sumPrint(int n){
    if(n==0) return 0;
     return n + sumPrint(n-1);
}

int main(){
     int n = 5;
     cout << "Sum of first " << n << " numbers is: " << sumPrint(n);
     return 0;
}


