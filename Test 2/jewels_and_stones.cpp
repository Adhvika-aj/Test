#include <iostream>
#include <string>
using namespace std;
int numJewelsInStones(string jewels, string stones) {
    int count = 0;
    for (int i = 0; i < jewels.size(); i++) {
        for (int j = 0; j < stones.size(); j++) {
            if (jewels[i] == stones[j]) {
                count++;
            }
        }
    }
    return count;
}
int main() {
    string jewels, stones;
    cout << "Enter jewels: ";
    cin >> jewels;
    cout << "Enter stones: ";
    cin >> stones;
    int count = numJewelsInStones(jewels, stones);
    cout << "Number of jewels in stones: " << count << endl;
    return 0;
}
