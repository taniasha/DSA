// sort an array of 0s , 1s , 2s

#include<iostream>
using namespace std;

int main(){
     int zero = 0, one = 0, two = 0;
     int a[]={0,2,1,2,1,0,2};

     int n = sizeof(a)/sizeof(int);
     int count=0;

     for(int i = 0; i<n; i++){
        if(a[i] == 0) zero++;
        else if(a[i] == 1)one++;
        else two++;
     }
     
     int index = 0;
     for(int i = 0; i<zero; i++) a[i]==0;
     for(int j =zero; j<one+zero; j++) a[j]=1;
     for(int j =one+zero; j<n; j++) a[j]=2;


     for(int i=0; i<n; i++){cout<<a[i];}
}