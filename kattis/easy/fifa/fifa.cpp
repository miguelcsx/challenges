/*
 * Problem: Framtíðar FIFA
 * Judge: Kattis
 * URL: https://open.kattis.com/problems/fifa
 * Memory Limit: 1024
 * Time Limit: 1000
 * Start: Mon 03 Jun 2024 08:38:59 PM EDT
 */

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    int n, k;

    cin >> n >> k;

    cout << (n / k) + 2022;

    return 0;
}

