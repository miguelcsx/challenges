/*
 * Problem: Non-overlapping Intervals
 * Judge: LeetCode
 * URL: https://leetcode.com/problems/non-overlapping-intervals/
 * Memory Limit: 1024
 * Time Limit: 1000
 * Start: Tue 02 Jul 2024 11:55:06 AM EDT
 */

#include <bits/stdc++.h>

using namespace std;


int erase_overlap_intervals(vector<vector<int>>& intervals) {
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << setprecision(20) << fixed;

    vector<vector<int>> intervals;
    int n, m;
    while (cin >> n >> m) {
        cout << n << " " << m << endl;
        intervals.push_back({n, m});
    }

    for (int i = 0; i < (int) intervals.size(); i++){
        for (int j = 0; j < (int) intervals.size(); j++) {
            cout << intervals[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

