/*
 * Problem: Stórafmæli
 * Judge: Kattis
 * URL: https://open.kattis.com/problems/storafmaeli
 * Memory Limit: 1024
 * Time Limit: 1000
 * Start: Mon 03 Jun 2024 09:50:51 PM EDT
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
    if (n % 10 == 0){
        cout << "Jebb\n";
    }
    else {
        cout << "Neibb\n";
    }

    return 0;
}

