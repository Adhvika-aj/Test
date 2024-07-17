#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers = {10, 5, 7, 15, 3, 20, 25};
    int max_element = numbers[0];
    for (size_t i = 1; i < numbers.size(); ++i) {
        if (numbers[i] > max_element) {
            max_element = numbers[i];
        }
    }
    cout << "The maximum element in the list is: " << max_element << endl;
    return 0;
}

