#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int sum = 0, num2 = num;
    while(num){
        int temp = num%10;
        sum = sum + (temp*temp*temp);
        num /= 10; 
    }
    if (sum == num2) cout<<"The given number is an armstrong number."<<endl;
    else cout<<"The given number is not an armstrong number."<<endl;
    
    return 0;
}