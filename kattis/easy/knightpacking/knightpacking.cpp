/*
 * Problem: Knight Packing
 * Judge: Kattis
 * URL: https://open.kattis.com/problems/knightpacking
 * Memory Limit: 1024
 * Time Limit: 1000
 * Start: Wed 05 Jun 2024 12:25:23 AM EDT
 */

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    int n;
    cin >> n;
    cout << (n % 2 == 0 ? "second" : "first");

    return 0;
}

