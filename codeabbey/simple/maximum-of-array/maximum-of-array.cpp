/*
 * Problem: Maximum of Array
 * Judge: Codeabbey
 * URL: https://www.codeabbey.com/index/task_view/maximum-of-array
 * Memory Limit: 2048
 * Time Limit: 1000
 * Start: Wed 05 Jun 2024 01:33:45 AM EDT
 */

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    int n;
    int max = -1000000;
    int min = 1000000;

    while (cin >> n) {
        max = (n >= max ? n : max);
        min = (n <= min ? n : min);
    }
    cout << max << " " << min;

    return 0;
}

