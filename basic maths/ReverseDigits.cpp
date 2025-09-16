#include<iostream>
using namespace std;

int main(){
    int n, digit;
    cout<<"Enter a number : ";
    cin>>n;
    int rev = 0;
    
    while(n!=0){
        digit = n % 10;
        rev = rev*10 + digit;
        n = n/10;
    }
    cout<<"Reversed number"<<rev<<endl;

}