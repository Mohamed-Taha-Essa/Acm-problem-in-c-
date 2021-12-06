#include <iostream>

using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        while(i != 0){
            if(arr[i] == arr[i - 1])
                break;
            else{
                ans++;
                break;
            }
        }
    }
    cout << ++ans << endl;
    return 0;
}
