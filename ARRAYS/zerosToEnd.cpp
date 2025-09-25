// move zeros to end of an array

#include<iostream>
using namespace std;

int main(){
    int a[] = {1,2,0,3,0,0,4};
    int n = 7;
    int j =0;
    for(int i=0; i<n; i++){
        if(a[i] != 0){         //for non zero elem
            swap(a[i], a[j]);  //swap krke agge bhejte jao ..j ka starting index isliye 0 rkha h
            j++;
        }
    }
    for(int i=0; i<n; i++) cout<<a[i]<<" ";

}