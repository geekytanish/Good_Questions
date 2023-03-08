#include<iostream>
#include<vector>
#include<string>
#include<array>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr{1,3,5,3,4};

    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size(); i=i+1){
        if(arr[i]!=i+1){arr[i]=i+1;}
    }
    for(auto value: arr){
        cout<<value<<" ";
    }
}
