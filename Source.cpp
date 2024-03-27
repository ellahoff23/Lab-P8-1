#include <iostream>
#include <string>

using namespace std;

int countVowel(string str) {
    int count = 0;
    for (char c : str) {
     
        char lowercaseChar = tolower(c);
     
        if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' ||
            lowercaseChar == 'o' || lowercaseChar == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
  
    string testString1 = "Hello, World!";
    string testString2 = "This is a test string";

    cout << "Number of vowels in \"" << testString1 << "\": " << countVowel(testString1) << endl;
    cout << "Number of vowels in \"" << testString2 << "\": " << countVowel(testString2) << endl;

    return 0;
}