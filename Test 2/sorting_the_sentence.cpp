#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(10);
        stringstream ss(s);
        string word;
        while (ss >> word) {
            char index = word.back();
            word.pop_back();
            words[index - '0'] = word;
        }
        string ans;
        for (int i = 1; i < words.size(); ++i) {
            if (!words[i].empty()) {
                ans += words[i] + " ";
            }
        }
        if (!ans.empty()) {
            ans.pop_back();
        }
        return ans;
    }
};
int main() {
    Solution solution;
    string sentence1 = "is2 sentence4 This1 a3";
    string sentence2 = "Myself2 Me1 I4 and3";
    cout << "Sorted sentence 1: " << solution.sortSentence(sentence1) << endl;
    cout << "Sorted sentence 2: " << solution.sortSentence(sentence2) << endl;
    return 0;
}
