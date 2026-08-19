#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" elements:"<<endl;
    for(int i=0; i<size; i++) cin>>arr[i];
    cout<<"Original Array: "<<endl;
    for(int i=0; i<size; i++) cout<<arr[i]<<" ";
    
    int n_size = size+1;
    for(int i=n_size-1; i>=2;i--){
        arr[i+1] = arr[i];
    }
    arr[2] = 25;
    cout<<"\nNew Array: "<<endl;
    for(int i=0; i<n_size; i++) cout<<arr[i]<<" ";

    return 0 ;
}