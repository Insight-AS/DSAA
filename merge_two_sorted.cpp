#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a = {2,5,8,13,21};
    vector<int> b = {3,6,7,25};
    int i=0,j=0;
    vector<int> arr(a.size()+b.size());
    while(i<a.size() && j<b.size()){
        if(a[i]>=b[j]){
            arr[i+j] = b[j];
            j++;
        }
        else{
            arr[i+j] = a[i];
            i++;
        }
    }
    
    while(i<a.size()){
        arr[i+j] = a[i];
        i++;
    }
    while(j<b.size()){
        arr[i+j] = b[j];
        j++;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}