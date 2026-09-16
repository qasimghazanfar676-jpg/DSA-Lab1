#include <iostream>
#include <string>
using namespace std;

int find(string text, string pattern) {
    for (int i = 0; i <= text.length() - pattern.length(); i++) {
        if (text.substr(i, pattern.length()) == pattern) {
            return i;
        }
    }
    return -1;
}

