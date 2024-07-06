/*
 * Problem: Sum in Loop
 * Judge: Codeabbey
 * URL: https://www.codeabbey.com/index/task_view/sum-in-loop
 * Memory Limit: 2048
 * Time Limit: 1000
 * Start: Wed 05 Jun 2024 01:02:28 AM EDT
 */

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    int total = 0;
    int n, a;
    cin >> n;

    while (n--) {
        cin >> a;
        total += a;
    }
    cout << total;

    return 0;
}

