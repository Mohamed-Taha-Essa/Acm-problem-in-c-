#include <iostream>

using namespace std;

int main()
{
    int num, ans = 0, x, y, z;
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> x >> y >> z;
        if( x + y + z >= 2)
            ans++;
    }
    cout << ans << endl;
    return 0;
}
