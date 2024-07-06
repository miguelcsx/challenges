/*
 * Problem: Tasks and Deadlines
 * Judge: CSES
 * URL: https://cses.fi/problemset/task/1630
 * Memory Limit: 512
 * Time Limit: 1000
 * Start: Tue 02 Jul 2024 01:20:49 PM EDT
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

    vector<vector<int>> tasks;

    int a, d;
    for (int i = 0; i < n; i++) {
        cin >> a >> d;
        tasks.push_back({a, d});
    }


    for (int i = 0; i < (int) tasks.size(); i++) {
        for (int j = 0; j < (int) tasks.size(); j++) {
            cout << tasks[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

