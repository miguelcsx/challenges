/*
 * Problem: Minimum of Three
 * Judge: Codeabbey
 * URL: https://www.codeabbey.com/index/task_view/min-of-three
 * Memory Limit: 2048
 * Time Limit: 1000
 * Start: Wed 05 Jun 2024 01:26:11 AM EDT
 */

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    int n;
    int a, b, c;

    cin >> n;

    while (n--) {
        cin >> a >> b >> c;
        cout << min(a, min(b, c)) << " ";
    }

    return 0;
}

