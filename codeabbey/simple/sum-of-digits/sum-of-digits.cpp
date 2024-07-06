/*
 * Problem: Sum of digits
 * Judge: Codeabbey
 * URL: https://www.codeabbey.com/index/task_view/sum-of-digits
 * Memory Limit: 2048
 * Time Limit: 1000
 * Start: Wed 05 Jun 2024 02:47:43 PM EDT
 */

#include <bits/stdc++.h>

using namespace std;

int sum_of_digits(int n) {
    if (n == 0) {
        return n;
    }

    return sum_of_digits(n / 10) + n % 10;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    int n;
    cin >> n;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << sum_of_digits((a * b) + c) << " ";
    }

    return 0;
}

