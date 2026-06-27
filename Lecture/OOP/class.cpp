#include<bits/stdc++.h>
using namespace std;

class cricketer {
    private:
    string name;
    int age;
    int matches;
    float avg;
    public :
    void setName(string name ){
        this->name = name;
    }
    void setAge(int age ){
        this->age = age;
    }
    void setMatches(int matches ){
        this->matches = matches;
    }
    void setAvg(float avg ){
        this->avg = avg;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getMatches(){
        return matches;
    }
    float getAvg(){
        return avg;
    }
};

//  METHOD 1 (Static allocation of memory)              (we'll take example of only 2 cricketer)

// int main() { 

//     cricketer Virat;
//     Virat.setName ("Virat Kohli");
//     Virat.setAge( 40);
//     Virat.setMatches(150);
//     Virat.setAvg ( 59.50);

//     cricketer Dhoni;
//     Dhoni.setName ("MS Dhoni");
//     Dhoni.setAge ( 47);
//     Dhoni.setMatches ( 300);
//     Dhoni.setAvg ( 100.09);

//     cricketer players[2] = {Virat , Dhoni};

//     for(int i = 0 ; i < 2 ; i++){
//         cout<<players[i].getName()<<'\n';
//         cout<<players[i].getAge() <<'\n';
//         cout<<players[i].getMatches() <<'\n';
//         cout<<players[i].getAvg() <<'\n';
//         cout<<'\n';
//     }
//     return 0;
// }



// Method 2 (Dynamic allocation of memory)

int main(){
    cout<<"Enter the number of players : ";
    int n;
    cin>>n;
    vector<cricketer> cric;
    cin.ignore();
    for(int i = 0; i<n ; i++){
        cout<<"For player "<<i+1<<" : \n";
        cricketer *Cricketer = new cricketer;
        string name;
        int age,matches;
        float avg;
        cout<<"Name : ";
        getline(cin,name);
        cout<<"Age : ";
        cin>>age;
        cout<<"Matches : ";
        cin>>matches;
        cout<<"Average : ";
        cin>>avg;
        cin.ignore();
        Cricketer->setName(name);
        Cricketer->setAge(age);
        Cricketer->setMatches(matches);
        Cricketer->setAvg(avg);

        cric.push_back(*Cricketer);

    }
    cout<<"\n\n OUTPUT \n\n";
    for(int i = 0 ; i < n ; i++){
        cout<<"Player "<<i+1<<" : \nName = "<<cric[i].getName() <<"\nAge = "<<cric[i].getAge() <<"\nMatches = "<<cric[i].getMatches() <<"\nAverage = "<<cric[i].getAvg()<<'\n' ;
    }

    return 0;
}