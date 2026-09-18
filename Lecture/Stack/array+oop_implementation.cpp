#include<bits/stdc++.h>
using namespace std;

class sttack{
private:
    vector<int> arr;
    int sz = 0;
public:
    sttack(int val){
        arr.push_back(val);
        sz++;
    }
    void push(int val){
        arr.push_back(val);
        sz++;
    }
    void pop(){
        if(!arr.empty()) {
            arr.pop_back();
            sz--;
        }
        else cout<<"Invalid move.\n";
    }
    int top(){
        if(arr.empty()) {
            cout<<"Sttack is empty.\n";
            return -1;
        }
        else return arr[sz-1];
    }
    int size(){
        return sz;
    }
    void display(){
        for(int &i : arr){
            cout<<i<<" ";
        }
        cout<<'\n';
    }
};

int main() { 
    sttack st(1);
    st.display();
    st.push(2);
    st.display();
    st.push(3);
    st.display();
    st.pop();
    st.display();
    st.size();
    st.top();
    return 0;
}