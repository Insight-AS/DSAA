#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter an year: ";
    cin>>year;
    if (((year%4) == 0 && (year%100) != 0) || (year % 400 == 0)) cout<<"The year is a leap year"<<endl;
    else cout<<"The year is not a leap year"<<endl;
}