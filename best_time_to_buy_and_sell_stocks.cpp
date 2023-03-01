#include<iostream>
#include<vector>
#include<array>
#include<limits.h>
using namespace std;

int check_min(vector<int>stock_price){
    int min=INT_MAX;

    for(int i=0; i<stock_price.size(); i=i+1){
        if(min>stock_price[i]){min=stock_price[i];}
    }

    return min;
}

int best_time(vector<int>stock_price, int min_price){

    int day=0;
    for(int i=0; i<stock_price.size(); i=i+1){
        if(stock_price[i]==min_price){day=i;}
    }

    //searching best day
    int max=0;
    int best_day=0;
    for(int i=day; i<stock_price.size(); i=i+1){
        if(max<stock_price[i]){max=stock_price[i];
        best_day=i;}
    }
    if(day+1>=stock_price.size()){
        cout<<"Buy on Day: "<<day+1<<endl;
        cout<<"You Should wait for another turn to sell"<<endl;
    }
    else{
    cout<<"Buy on Day: "<<day+1<<endl;
    cout<<"Sell on Day: "<<best_day+1<<endl; }
}

int main(){

    //no. of days
    int days;
    cout<<"Enter Days: ";
    cin>>days;
    vector<int>stocks_price(days);

    //Enter stocks price
    for(int i=0; i<stocks_price.size(); i=i+1){
        cout<<"Price on "<<i+1<<"th day: ";
        cin>>stocks_price[i];
    }

    int min_price=check_min(stocks_price);

    best_time(stocks_price, min_price);
}
