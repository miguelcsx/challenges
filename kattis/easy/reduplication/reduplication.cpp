/*
 * Problem: Reduplication
 * Judge: Kattis
 * URL: https://open.kattis.com/problems/reduplikation
 * Memory Limit: 1024
 * Time Limit: 1000
 * Start: Mon 03 Jun 2024 08:44:43 PM EDT
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    string word;
    int n;

    cin >> word >> n;

    for (int i = 0; i < n; i++) {
        cout << word;
    }
    cout << '\n';


    return 0;
}

