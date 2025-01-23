// Q. Take input of marks and grade them like following :
/* 
91 - 100 : Excellent
81 - 90 : Very Good
71 - 80 : Good
61 - 70 : Can do Better
51 - 60 : Average
40 - 50 : Below Average
< 40 : FAIL
*/

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int marks;
    cout<<"Enter the marks:";
    cin>>marks;
    if(marks<40){
        cout<<"Fail.";
    }
    else if(marks<=50){
        cout<<"Below Average.";
    }
    else if(marks<=60){
        cout<<"Average.";
    }
    else if(marks<=70){
        cout<<"Can Do Better.";
    }
    else if(marks<=80){
        cout<<"Good.";
    }
    else if(marks<=90){
        cout<<"Very Good.";
    }
    else if(marks<=100){
        cout<<"Excellent.";
    }
    return 0;
}