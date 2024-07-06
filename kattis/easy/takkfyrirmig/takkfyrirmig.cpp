/*
 * Problem: Takk fyrir mig
 * Judge: Kattis
 * URL: https://open.kattis.com/problems/takkfyrirmig
 * Memory Limit: 1024
 * Time Limit: 1000
 * Start: Mon 03 Jun 2024 09:53:07 PM EDT
 */

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    int n;
    string name;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name;
        cout << "Takk " << name << '\n';
    }

    return 0;
}

