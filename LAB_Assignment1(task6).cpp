#include <iostream>
using namespace std;

int main() {
    int arr[10] = {5, 2, 9, 1, 6, 7, 3, 8, 4, 0};
    int key;
    cout << "Enter value to search: ";
    cin >> key;

    bool found = false;
    for(int i=0; i<10; i++){
        if(arr[i] == key){
            cout << key << " found at index " << i << endl;
            found = true;
            break;
        }
    }
    if(!found) cout << key << " not found\n";

    return 0;
}
