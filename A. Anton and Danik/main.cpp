#include <iostream>

using namespace std;

int main()
{
    int n, a = 0, d = 0;
    char r;
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> r;
        if(r == 'A')
            a++;
        if(r == 'D')
            d++;
    }
    if(a > d)
        cout << "Anton" << endl;
    if(a < d)
        cout << "Danik" << endl;
    if(a == d)
        cout << "Friendship" << endl;

    return 0;
}
