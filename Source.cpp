#include <iostream>
#include <string>

using namespace std;

int countCharacter(string str) {
    return str.length();
}

int main() {
    string testString1 = "Hello, world!";
    string testString2 = "This is a test string.";
    string testString3 = "";

    cout << "Number of characters in testString1: " << countCharacter(testString1) << endl;
    cout << "Number of characters in testString2: " << countCharacter(testString2) << endl;
    cout << "Number of characters in testString3: " << countCharacter(testString3) << endl;

    return 0;
}