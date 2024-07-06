/*
 * Problem: Rounding
 * Judge: Codeabbey
 * URL: https://www.codeabbey.com/index/task_view/rounding
 * Memory Limit: 2048
 * Time Limit: 1000
 * Start: Wed 05 Jun 2024 01:44:18 AM EDT
 */

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    float a, b;
    while (n--) {
        cin >> a >> b;
        int result = round(a / b);

        cout << result << " ";
    }

    return 0;
}

