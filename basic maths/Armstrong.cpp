#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int original = num;
    int sum = 0; 

    while(num>0){
        int digit = num % 10;
         sum = digit*digit*digit + sum;
         num =  num /10;
    }
    if(sum == original ) cout<<"yes";
    else cout<<"no";

    return 0;
    
}