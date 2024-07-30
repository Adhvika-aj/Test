#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i < image.size(); i++) {
            reverse(image[i].begin(), image[i].end());
        }
        for(int i = 0; i < image.size(); i++) {
            for(int j = 0; j < image[0].size(); j++) {
                image[i][j] = 1 - image[i][j];
            }
        }
        return image;
    }
};
int main() {
    Solution solution;
    vector<vector<int>> image = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 0, 0}
    };
    vector<vector<int>> result = solution.flipAndInvertImage(image);
    cout << "Flipped and inverted image:" << endl;
    for(const auto& row : result) {
        for(int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }
    return 0;
}
