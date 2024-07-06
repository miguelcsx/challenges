/*
 * Problem: Quadrant Selection
 * Judge: Kattis
 * URL: https://open.kattis.com/problems/quadrant
 * Memory Limit: 1024
 * Time Limit: 1000
 * Start: Tue 04 Jun 2024 11:34:44 PM EDT
 */

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    int x, y;
    cin >> x >> y;

    if (x >= 0 && y >= 0) {
        cout << 1;
    }
    else if (x <= 0 && y >= 0) {
        cout << 2;
    }
    else if (x<=0 && y <= 0) {
        cout << 3;
    }
    else {
        cout << 4;
    }

    return 0;
}

