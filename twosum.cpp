#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
#include <bits/stdc++.h>
using namespace std;

int twosum(vector<int>arr,int k){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[i]+arr[j]==k){
                return 1;
            }
            else{
                continue;
            }
        }
    }
}

int twosumoptimal(vector<int>arr,int k){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int left=0;
    int right=n-1;
    
    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum==k){
        return 1;
        }
        else if(sum<k){
            left++;
        }
        else{
            right--;
        }
    }
    return 0;
    
}


int main(){
    vector<int>vec1={2,6,5,8,11};
    int k=14;
    int ans = twosumop(vec1,k);
    if(ans==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}