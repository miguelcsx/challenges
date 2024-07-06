/*
 * Problem: Viðsnúningur
 * Judge: Kattis
 * URL: https://open.kattis.com/problems/vidsnuningur
 * Memory Limit: 1024
 * Time Limit: 1000
 * Start: Mon 03 Jun 2024 10:10:48 PM EDT
 */

#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}

