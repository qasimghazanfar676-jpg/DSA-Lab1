
#include <iostream>
#include <string>
#include "task4.cpp"
using namespace std;

int find(string text, string pattern);

int main() {

    // Test case 1: Pattern at the beginning
    string text1 = "hello world";
    string pattern1 = "hello";

    cout << "Test case 1: ";
    cout << find(text1, pattern1) << endl;


    // Test case 2: Pattern at the end
    string text2 = "hello world";
    string pattern2 = "world";

    cout << "Test case 2: ";
    cout << find(text2, pattern2) << endl;


    // Test case 3: Pattern not present
    string text3 = "hello world";
    string pattern3 = "cat";

    cout << "Test case 3: ";
    cout << find(text3, pattern3) << endl;


    // Test case 4: Empty pattern
    string text4 = "hello world";
    string pattern4 = "";

    cout << "Test case 4: ";
    cout <<"Empty pattern:"<< find(text4, pattern4) << endl;

    return 0;
}

