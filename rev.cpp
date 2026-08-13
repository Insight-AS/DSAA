#include<iostream>
using namespace std;

int main(){
    int num, rev=0, sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num){
        int temp = num%10;
        rev = rev*10 + temp;
        num /= 10;
    }
    cout<<"The reversed number of is: "<<rev<<endl;

}