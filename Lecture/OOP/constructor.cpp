#include<bits/stdc++.h>
using namespace std;

class Bike{
    public :
    int tyreSize;
    int engineCapacity;
    // default constructor
    Bike(int tyreSize, int engineCapacity){
        this->tyreSize = tyreSize;
        this->engineCapacity = engineCapacity;        
    }

};

int main() { 
    Bike tvs(20,110);               // object creation // call to constructor
    return 0;
}