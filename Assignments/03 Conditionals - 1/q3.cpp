// Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int year;
    cout<<"Enter year: ";
    cin>>year;
    if(year % 100 == 0){
        if(year % 400 == 0) cout<<"Leap year.";
        else cout<<"Not a Leap year.";
    }
    else{
        if(year % 4 == 0) cout<<"Leap Year.";
        else cout<<"Not a Leap year.";
    }
    return 0;
}