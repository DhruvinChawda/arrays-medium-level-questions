#include<iostream>
#include<set>
using namespace std;

int main(){
    int arr[10]={2,2,2,3,4,4,5};
    set<int> s;
    for(int i=0;i<7;i++){
        s.insert(arr[i]);
    }

    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

}
