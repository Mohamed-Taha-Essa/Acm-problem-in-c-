#include <iostream>
#include <string>
#include <string.h>
using namespace std;
string Tolower(string &s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    return s;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    Tolower(s1);
    Tolower(s2);
    if(s1 == s2)
        cout << 0 << endl;
    else if(s1 < s2)
        cout << -1 << endl;
    else
        cout << 1 << endl;
    return 0;
}
