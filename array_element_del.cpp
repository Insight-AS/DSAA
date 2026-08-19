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
    
    for(int i = 3; i<size;i++){
        arr[i-1] = arr[i];
    }
    
    cout<<"\nNew Array: "<<endl;
    for(int i=0; i<size-1; i++) cout<<arr[i]<<" ";

    return 0 ;
}