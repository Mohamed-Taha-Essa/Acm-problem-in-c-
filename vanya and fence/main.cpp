#include <iostream>

using namespace std;

int main()
{
    int n, h, x, m = 0;
    cin >> n >> h;
    for(int i = 0;i < n;i++){
        cin >> x;
        if(x <= h)
            m = m + 1;
        else
            m = m + 2;
    }
    cout << m;
    return 0;
}
