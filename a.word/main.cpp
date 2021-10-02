#include <iostream>
#include <string>
using namespace std;

string tolowerCase(string &s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    return s;
}
string toupperCase (string &s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    int count_string = s.length();
    int upper = 0, lower;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            upper++;
    }
    lower = count_string - upper;
    if(lower == upper){
        tolowerCase(s);
        cout << s << endl;
    }
    else if(lower < upper){
        toupperCase(s);
        cout << s << endl;
    }
    else if(lower > upper){
        tolowerCase(s);
        cout << s << endl;
    }
    return 0;
}
