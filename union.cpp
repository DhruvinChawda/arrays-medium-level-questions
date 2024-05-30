
#include <bits/stdc++.h>

using namespace std;

void arrunion (int arr1[],int arr2[],int n,int m){
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    
}

int main(){
    int n=6,m=4;
    int arr1[6]={1,2,3,4,9,43};
    int arr2[4]={3,4,5,6};
    arrunion(arr1,arr2,n,m);
}

