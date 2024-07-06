/*
 * Problem: Which is Greater?
 * Judge: Kattis
 * URL: https://open.kattis.com/problems/whichisgreater
 * Memory Limit: 2048
 * Time Limit: 1000
 * Start: Wed 05 Jun 2024 12:19:20 AM EDT
 */

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    u_int a, b;
    cin >> a >> b;
    cout << (a > b ? 1: 0);

    return 0;
}

