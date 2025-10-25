#include <iostream>
using namespace std;

int main() {
    int arr[10] = {5, 2, 9, 1, 6, 7, 3, 8, 4, 0};
    int max = arr[0], min = arr[0];

    for(int i=1; i<10; i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    cout << "Maximum: " << max << "\nMinimum: " << min << endl;
    return 0;
}
