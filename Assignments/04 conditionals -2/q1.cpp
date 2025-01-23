// Write a program to count the minimum number of notes in a given amount using the switch statement.
// Input : 510
// Output : notes of “500” = 1 and notes of “10” = 1
// Available notes :
// 500
// 200
// 100
// 50
// 20
// 10
// 5
// 2
// 1

#include<bits/stdc++.h>
using namespace std;
int main() { 
    int money;
    cout<<"Enter money : ";
    cin>>money;
    cout<<"Number of notes required : \n";
    while(true){
        cout<<"500 : "<<money/500<<endl;
        money = money - 500*(money/500);
        cout<<"200 : "<<money/200<<endl;
        money = money - 200*(money/200);
        cout<<"100 : "<<money/100<<endl;
        money = money - 100*(money/100);
        cout<<"50 : "<<money/50<<endl;
        money = money - 50*(money/50);
        cout<<"20 : "<<money/20<<endl;
        money = money - 20*(money/20);
        cout<<"10 : "<<money/10<<endl;
        money = money - 10*(money/10);
        cout<<"5 : "<<money/5<<endl;
        money = money - 5*(money/5);
        cout<<"2 : "<<money/2<<endl;
        money = money - 2*(money/2);
        cout<<"1 : "<<money/1<<endl;
        money = money - 1*(money/1);
        break;
    }
    return 0;
}