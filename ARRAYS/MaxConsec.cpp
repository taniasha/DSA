// Maximum consecutive ones

#include<iostream>
using namespace std;

int main(){
      int a[] = {0,0,1,1,1,0,0,0,1,1};
      int n = sizeof(a)/sizeof(n);
      
      int count = 0, maxCount = 0;
      for(int i = 0; i<n; i++){
            if(a[i] == 1){
                  count++;
                  maxCount = max(maxCount, count);
            }else{
                  count = 0;
            }
      }
      cout<<"Max count "<<maxCount;

      return 0;
} 