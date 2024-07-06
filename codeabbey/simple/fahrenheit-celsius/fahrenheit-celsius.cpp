/*
 * Problem: Fahrenheit to Celsius
 * Judge: Codeabbey
 * URL: https://www.codeabbey.com/index/task_view/fahrenheit-celsius
 * Memory Limit: 2048
 * Time Limit: 1000
 * Start: Wed 05 Jun 2024 02:35:40 PM EDT
 */

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(0) << fixed;

    int n, x;
    cin >> n;
    while (n--) {
        cin >> x;
        cout << round((x - 32) * (5.0 / 9)) << " ";
    }

    return 0;
}

