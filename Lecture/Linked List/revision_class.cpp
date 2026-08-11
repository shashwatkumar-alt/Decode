#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int roll;
    float marks;
    Student(string name, int roll, float marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

void change(Student &shashwat){              // Pass by reference
    shashwat.name = "nothing";
}

// void change(Student shashwat){              // Pass by value
//     shashwat.name = "nothing";
// }

int main() { 
    Student shashwat("Shashwat",8,77.6);
    cout<<shashwat.name<<" "<<shashwat.roll<<" "<<shashwat.marks<<'\n';
    change(shashwat);
    cout<<shashwat.name<<" "<<shashwat.roll<<" "<<shashwat.marks<<'\n';
    
    Student *ptr = &shashwat;
    (*ptr).name = "something";
    cout<<shashwat.name<<" "<<shashwat.roll<<" "<<shashwat.marks<<'\n';
    ptr->name = "arrow_changed";
    cout<<shashwat.name<<" "<<shashwat.roll<<" "<<shashwat.marks<<'\n';
    return 0;
}