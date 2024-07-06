/*
 * Problem: Autori
 * Judge: Kattis
 * URL: https://open.kattis.com/problems/autori
 * Memory Limit: 1024
 * Time Limit: 1000
 * Start: Mon 03 Jun 2024 10:26:12 PM EDT
 */

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    string author;

    while(getline(cin, author, '-')) {
        cout << author.at(0);
    }

    return 0;
}

