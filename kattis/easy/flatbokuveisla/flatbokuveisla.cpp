/*
 * Problem: Flatbökuveisla
 * Judge: Kattis
 * URL: https://open.kattis.com/problems/flatbokuveisla
 * Memory Limit: 1024
 * Time Limit: 1000
 * Start: Mon 03 Jun 2024 08:19:05 PM EDT
 */

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    int n, m;
    cin >> n >> m;
    cout << n % m;

    return 0;
}

