#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int>arr,int n){
    int maxi=arr[0];
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        maxi=max(sum,maxi);

        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
int main(){
    vector<int>arr={1,-3,4,6,-7,6};
    int n=arr.size();
    cout<<kadane(arr,n);
}