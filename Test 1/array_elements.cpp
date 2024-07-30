#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Elements of the array are: ";
    for (int i = 0; i < length; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}





