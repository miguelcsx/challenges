/*
 * Problem: Sums in Loop
 * Judge: Codeabbey
 * URL: https://www.codeabbey.com/index/task_view/sums-in-loop
 * Memory Limit: 2048
 * Time Limit: 1000
 * Start: Wed 05 Jun 2024 01:15:17 AM EDT
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
        cout << a + b << " ";
    }

    return 0;
}

