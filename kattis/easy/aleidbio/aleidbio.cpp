/*
 * Problem: Á leið í bíó
 * Judge: Kattis
 * URL: https://open.kattis.com/problems/aleidibio
 * Memory Limit: 1024
 * Time Limit: 1000
 * Start: Mon 03 Jun 2024 08:07:49 PM EDT
 */

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    int a, b, c;
    cin >> a >> b >> c;
    cout << c - (a + b);

    return 0;
}

