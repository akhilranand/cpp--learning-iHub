#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int freq[256] = {0};

    for (char ch : str) {
        freq[ch]++;
    }

    while (true) {
        int maxFreq = 0;
        char maxChar;

        for (int i = 0; i < 256; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                maxChar = i;
            }
        }

        if (maxFreq == 0)
            break;

        for (int i = 0; i < maxFreq; i++) {
            cout << maxChar;
        }

        freq[maxChar] = 0;
    }

    return 0;
}