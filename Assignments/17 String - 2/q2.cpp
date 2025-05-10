// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"     Output : 8
// Input : str = "1241"        Output : 2

#include<bits/stdc++.h>
using namespace std;
int main() { 
    string str;
    getline(cin,str);
    int n = str.size();
    vector<int>arr;
    for(int i = 0; i<n;i++){
        arr.push_back(str[i]-'0');
    }
    sort(arr.rbegin(),arr.rend());
    cout<<arr[1];
    return 0;
}