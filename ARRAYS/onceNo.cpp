// Find the number that appears once, and other numbers twice.
    //   smart logic
//1.  Numbers that appear twice will cancel each other with XOR.
//2.  The number appearing once will be left.

#include<iostream>
using namespace std;

int main(){
    int a[] = {1,2,2,3,1,4,3};
    int n = sizeof(a)/sizeof(int);

    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^a[i]; //XOR on each element
    }

    cout << "Number appearing once: " << ans;
    return 0;
}

// ans = 0
// ans = ans ^ 2 → 2
// ans = ans ^ 3 → 2 ^ 3
// ans = ans ^ 5 → 2 ^ 3 ^ 5
// ans = ans ^ 4 → 2 ^ 3 ^ 5 ^ 4
// ans = ans ^ 5 → 2 ^ 3 ^ 5 ^ 4 ^ 5 → (5^5)=0 → 2 ^ 3 ^ 4
// ans = ans ^ 3 → 2 ^ 3 ^ 4 ^ 3 → (3^3)=0 → 2 ^ 4
// ans = ans ^ 4 → 2 ^ 4 ^ 4 → (4^4)=0 → 2
