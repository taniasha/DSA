//smallest element in an array

#include<iostream>
#include<climits>
using namespace std;


int main(){
    int num[] = {5, 14, 1, -1};
    int size = 4;
    int smallest = INT_MAX;
    for(int i=0;i<size;i++){
    if(num[i] < smallest){
        smallest = num[i];
    }
}
cout<<"Smallest"<<smallest;
}


