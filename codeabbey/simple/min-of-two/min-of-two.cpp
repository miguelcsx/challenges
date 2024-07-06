/*
 * Problem: Minimum of Two
 * Judge: Codeabbey
 * URL: https://www.codeabbey.com/index/task_view/min-of-two
 * Memory Limit: 2048
 * Time Limit: 1000
 * Start: Wed 05 Jun 2024 01:22:19 AM EDT
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
    while (n--) {
        int a, b;
        cin >> a >> b;
        cout << min(a, b) << " ";
    }

    return 0;
}

