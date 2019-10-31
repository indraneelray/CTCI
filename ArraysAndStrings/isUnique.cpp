#include<string>
#include<vector>
#include<iostream>
#include<bitset>
#include<algorithm>
#include<unordered_set>

using namespace std;

bool isUniqueBySort(string s) {
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i]==s[i+1]){
            return false;
        }
    }
    return true;
}

bool isUniqueueDP(string s) {
    unordered_set <char> uset;
    for(auto i : s) {
        if(uset.find(i) == uset.end()) {
            uset.insert(i);
        }
        else
        {
            return false;
        }
        
    }
    return true;
}

int main() {
    string word = "abce";
    cout<<"sorting and comparing "<<word<<endl;
    if(isUniqueueDP(word))
        cout<<"true"<<endl;
    else
            cout<<"false"<<endl;
    if(isUniqueBySort(word))
        cout<<"true"<<endl;
    else
            cout<<"false";
    
    return 0;
}