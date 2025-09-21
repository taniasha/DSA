#include<iostream>
using namespace std;

int main(){
    
    int a;
    cout<<"Enter a number";
    cin>>a;

   int rev = 0;
   int orignal = a;
   while(a>0){
     int lastdigit = a%10;
     rev = rev*10 + lastdigit;
     a = a/10;
   }

   if(rev == orignal) cout<<"Palindrome";
   else cout<<"Not";

    return 0;
}