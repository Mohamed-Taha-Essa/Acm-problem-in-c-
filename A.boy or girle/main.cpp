#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = s.length();
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0')
            continue;
        for(int j = i + 1; j < s.length(); j++){
            if(s[i] == s[j]){
                --cnt;
                s[j] = '0';
            }
        }
    }
    if(cnt % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
