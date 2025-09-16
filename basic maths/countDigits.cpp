#include<iostream>
using namespace std;

int main(){
     int a;
     cout<<"Enter a Number : ";
     cin>>a;
     int count = 0;
     
     while(a){
        a = a/10;
        count++;
     }
     cout<<"count"<<count;

    return 0;
}
