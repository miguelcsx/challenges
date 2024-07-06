/*
 * Problem: Millifærsla
 * Judge: Kattis
 * URL: https://open.kattis.com/problems/millifaersla
 * Memory Limit: 1024
 * Time Limit: 1000
 * Start: Mon 03 Jun 2024 10:14:39 PM EDT
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
    if (a < b && a < c) {
        cout << "Monnei\n";
    }
    else if (b < a && b < c) {
        cout << "Fjee\n";
    }
    else {
        cout << "Dolladollabilljoll\n";
    }

    return 0;
}

