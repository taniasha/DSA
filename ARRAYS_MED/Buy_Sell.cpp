// price[i] -> price on day i (this is basically the selling price)
// minPrice -> the lowest price u have seen so far 
// and maxprofit =  price[i] - minPrice

#include<iostream>
using namespace std;

int main(){
    int price[] = {2,4,7,1,0,8};
    int n = 6;
    int minPrice = price[0];
    int maxProfit = 0;

    for(int i=1; i<n; i++){
        int profit = price[i] - minPrice;

        if(profit > maxProfit){
            maxProfit = profit;
        }
        if(price[i]<minPrice){
            minPrice = price[i];
        }
    }
    
    cout<<"maximum profit : "<<maxProfit;
} 