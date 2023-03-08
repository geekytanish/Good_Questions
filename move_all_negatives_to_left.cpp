#include<iostream>
#include<array>
#include<vector>
#include<string>
#include<string.h>
#include<strings.h>
using namespace std;

int main(){
    vector<int>arr{1,2,-3,4,-5,6,-3,-4};

    for(int i=0; i<arr.size(); i=i+1){
        for(int j=i+1; j<arr.size(); j=j+1){
            if(arr[i]>arr[j]){swap(arr[i], arr[j]);}
        }
    }
    for(auto value: arr){
        cout<<value<<" ";
    }
}
