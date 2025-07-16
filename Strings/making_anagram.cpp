#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int makeAnagram(string a, string b) {
    int freq[26] = {0};  // For a-z

    // Add frequency from string a
    for (int i = 0; i < a.length(); i++) {
        freq[a[i] - 'a']++;
    }

    // Subtract frequency from string b
    for (int i = 0; i < b.length(); i++) {
        freq[b[i] - 'a']--;
    }

    // Sum absolute values of differences
    int deletions = 0;
    for (int i = 0; i < 26; i++) {
        deletions += abs(freq[i]);
    }

    return deletions;
}

int main() {
    string a = "cde";
    string b = "abc";

    cout << "Minimum deletions to make anagram: " << makeAnagram(a, b) << endl;

    return 0;
}
