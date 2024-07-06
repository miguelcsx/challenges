/*
 * Problem: Vowel Count
 * Judge: Codeabbey
 * URL: https://www.codeabbey.com/index/task_view/vowel-count
 * Memory Limit: 2048
 * Time Limit: 1000
 * Start: Wed 05 Jun 2024 12:19:20 AM EDT
 */

#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

bool isvowel(char c) {
    c = tolower(c);
    if (strchr("aeiouy", c) != nullptr) {
        return true;
    }
    return false;
}

int vowel_count(string str) {
    return count_if(str.begin(), str.end(), isvowel);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character

    string str;
    while (n--) {
        getline(cin , str);
        cout << vowel_count(str) << " ";
    }

    return 0;
}

