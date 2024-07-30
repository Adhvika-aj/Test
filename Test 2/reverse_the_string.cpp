#include <bits/stdc++.h>
using namespace std;
void reverse(string& str, int i, int j) {
    if (i >= j) {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    reverse(str, i, j);
}
string reverseString(string str) {
    reverse(str, 0, str.length() - 1);
    return str;
}
int main() {
    string str = "abcde";
    cout << "Original string: " << str << endl;
    string reversed = reverseString(str);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
