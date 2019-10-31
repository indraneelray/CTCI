#include<string>
#include<vector>
#include<iostream>
#include<bitset>
#include<algorithm>

using namespace std;

bool checkPermuatation(string s1, string s2) {
    sort(s1.begin(), s1.end());
    cout<<s1<<endl;
    sort(s2.begin(), s2.end());
    cout<<s2<<endl;
    if(s1==s2)
        return true;
    else
    {
        return false;
    }
    

}

int main() {
    string s1 = "poop";
    string s2 = "oppo";
    if (checkPermuatation(s1, s2)) {
        cout<<"true "<<endl;
    }
    else {
        cout<<"false"<<endl;
    }
    return 0;
}