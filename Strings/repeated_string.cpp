#include <iostream>
using namespace std;

long repeatedString(string s, long n) {
    long count_a_in_s = 0;

    // Count 'a' in full string s
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') {
            count_a_in_s++;
        }
    }

    // Calculate how many full repetitions of s fit in n
    long full_repeats = n / s.length();
    long remainder = n % s.length();

    long total_a = full_repeats * count_a_in_s;

    // Count 'a' in the remaining substring
    for (int i = 0; i < remainder; i++) {
        if (s[i] == 'a') {
            total_a++;
        }
    }

    return total_a;
}

int main() {
    string s = "abcac";
    long n = 10;

    cout << "Total 'a' in repeated string: " << repeatedString(s, n) << endl;

    return 0;
    /////naman 
    
}
