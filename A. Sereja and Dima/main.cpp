#include <iostream>

using namespace std;
int maximum (int x , int y){
    if (x >= y)
        return x;
    if (x < y)
        return y;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int serja = 0, dima = 0;
    int i = 0, j = n-1;
    for(int a = 0;a < n ; a++){
        if(a % 2 == 0){
            serja += maximum(arr[i],arr[j]);
            if(maximum(arr[i],arr[j]) == arr[i])
                i++;
            else if(maximum(arr[i],arr[j]) == arr[j])
                j--;
        }
        else{
            dima += maximum(arr[i],arr[j]);
            if(maximum(arr[i],arr[j]) == arr[i])
                i++;
            else if(maximum(arr[i],arr[j]) == arr[j])
                j--;
        }


    }
    cout << serja << " " << dima << endl;
    return 0;
}
