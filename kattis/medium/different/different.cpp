/*
 * Problem: A Different Problem
 * Judge: Kattis
 * URL: https://open.kattis.com/problems/different
 * Memory Limit: 1024
 * Time Limit: 1000
 * Start: Tue 02 Jul 2024 11:34:03 AM EDT
 */

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    long long n, m;
    while (cin >> n >> m) {
        cout << abs(n - m) << endl;
    }

    return 0;
}

