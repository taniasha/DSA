#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to divide : ";
    cin>>n;
    
    // divisor is a number which divides number completely without leaving a remainder.

    cout<<"Divisors of "<<n<<" are ";
    for(int i=1; i<n; i++){
       if(n%i==0) cout<<i<<", ";
    }
}