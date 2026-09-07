#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
static const bool fastIO = [](){
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();
void conquer(){
    string S;
    cin>>S;
    string T = "ADVITIYA";
    int sum = 0;
    for(int i = 0 ; i<8;i++){

        if(S[i]!=T[i]){
            if(S[i]<T[i]){
                sum += T[i]-S[i];
            }
            else{
                sum += ('Z' - S[i])+(T[i]-'A'+1);
            }
        }
    }
    cout<<sum<<endl;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        conquer();
    }
}