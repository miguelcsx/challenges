/*
 * Problem: Jack-O'-Lantern Juxtaposition
 * Judge: Kattis
 * URL: https://open.kattis.com/problems/jackolanternjuxtaposition
 * Memory Limit: 1024
 * Time Limit: 1000
 * Start: Tue 04 Jun 2024 11:39:48 PM EDT
 */

#include <bits/stdc++.h>
#include <sys/types.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    u_int n, t, m;
    cin >> n >> t >> m;

    cout << n * t * m;

    return 0;
}

