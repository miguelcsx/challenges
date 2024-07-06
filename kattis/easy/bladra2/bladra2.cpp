/*
 * Problem: Blaðra
 * Judge: Kattis
 * URL: https://open.kattis.com/problems/bladra2
 * Memory Limit: 1024
 * Time Limit: 1000
 * Start: Mon 03 Jun 2024 09:43:46 PM EDT
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(9) << fixed;

    float v, a, t;
    cin >> v >> a >> t;

    cout << (v * t) + (a * (t * t) / 2);

    return 0;
}

