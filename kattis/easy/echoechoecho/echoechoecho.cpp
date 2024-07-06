/*
 * Problem: Echo Echo Echo
 * Judge: Kattis
 * URL: https://open.kattis.com/problems/echoechoecho
 * Memory Limit: 1024
 * Time Limit: 1000
 * Start: Wed 05 Jun 2024 12:14:40 AM EDT
 */

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    string word;
    cin >> word;

    cout << word << " " << word << " " << word;
    return 0;
}

