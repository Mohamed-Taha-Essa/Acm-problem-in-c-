#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int arr[num];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    int temp;
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            if((j+1) == num)
                break;
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp ;
            }
        }
    }
    for(int i = 0; i < num; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
