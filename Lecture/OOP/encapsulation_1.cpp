#include<bits/stdc++.h>
using namespace std;

class Student{
    public :
    int adm_no;
    int roll;
    int cl;
    // String name;
};

int main() { 
    Student namam;
    namam.adm_no = 1;
    namam.roll = 1;
    namam.cl = 10;
    // namam.name = "Naman Boka";
    cout<<namam.adm_no<<" "<<namam.roll<<" "<<namam.cl<<endl;
    return 0;
}