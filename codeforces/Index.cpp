#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void processTestCase(int n, int m, vector<int>& arr, vector<pair<char, pair<int, int>>>& operations) {
   
    vector<long long> inc(n, 0);
    vector<long long> dec(n, 0);

    
    for (auto& op : operations) {
        char type = op.first;
        int l = op.second.first;
        int r = op.second.second;

        if (type == '+') {
            for (int i = 0; i < n; ++i) {
                if (arr[i] >= l && arr[i] <= r) {
                    inc[i]++;
                }
            }
        } else if (type == '-') {
            for (int i = 0; i < n; ++i) {
                if (arr[i] >= l && arr[i] <= r) {
                    dec[i]++;
                }
            }
        }
    }

   
    vector<int> results;
    for (auto& op : operations) {
        char type = op.first;
        int l = op.second.first;
        int r = op.second.second;

        
        if (type == '+') {
            for (int i = 0; i < n; ++i) {
                if (arr[i] >= l && arr[i] <= r) {
                    arr[i]++;
                }
            }
        } else if (type == '-') {
            for (int i = 0; i < n; ++i) {
                if (arr[i] >= l && arr[i] <= r) {
                    arr[i]--;
                }
            }
        }

       
        int maxVal = *max_element(arr.begin(), arr.end());
        results.push_back(maxVal);
    }

    
    for (int result : results) {
        cout << result << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        vector<pair<char, pair<int, int>>> operations(m);
        for (int i = 0; i < m; ++i) {
            char type;
            int l, r;
            cin >> type >> l >> r;
            operations[i] = {type, {l, r}};
        }

        processTestCase(n, m, arr, operations);
    }

    return 0;
}
