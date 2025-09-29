#include<iostream>
#include <algorithm>
using namespace std;

int ConsecutiveSequence(int arr[], int n){
    if(n == 0) return 0;
    sort(arr, arr+n);

    int longest = 1, currLen = 1;

    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1] + 1) currLen++;
        else if(arr[i] != arr[i-1]) currLen = 1;

        longest = max(longest, currLen); // this line execute everytime and is outside of if-else
    }
    return longest;
}

int main(){
    int arr[] = {100, 1, 500, 3, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Longest consecutive array: " << ConsecutiveSequence(arr, n);
    return 0;
}
