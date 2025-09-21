#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int i = 1, count = 0;
    while(i <= num){
        if(num % i == 0){
            count++;
        }
        i++;
    }
    if(count == 2){
        cout<<"Prime number.";
    }else{
        cout<<"Not Prime.";
    }

    return 0;
}