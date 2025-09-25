#include<iostream>
using namespace std;

int main(){
    int a[] = {10,20,30,40,50};
    int n = sizeof(a)/sizeof(int);
    bool found = false;

    int target = 99;
    for(int i=0; i<n; i++){
        if(a[i] == target){
            cout<<"Index : "<<i;
            found = true;
            break;
        }
    }
    if(!found) { cout<<"Elem not found";}

    return 0;
}