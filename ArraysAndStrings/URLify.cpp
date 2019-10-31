#include<string>
#include<vector>
#include<iostream>
#include<bitset>
#include<algorithm>

using namespace std;

string URLify(string s) {
    string url;
    for ( int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            url.push_back('%');
            url.push_back('2');
            url.push_back('0');

        }
        else
        {
            url.push_back(s[i]);
        }
        
    }
    return url;
}

int main() {
    string s = "Neel Ind hello";
    string url = URLify(s);
    cout<<url<<endl;
    return 0;
}