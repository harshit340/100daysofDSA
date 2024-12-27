#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;

const int MAXN = 1000;

// Function to compute gcd
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Precompute all valid triples
vector<tuple<int, int, int>> precomputeValidTriples() {
    vector<tuple<int, int, int>> validTriples;
    for (int a = 1; a <= MAXN; ++a) {
        for (int b = a + 1; b <= MAXN; ++b) {
            for (int c = b + 1; c <= MAXN; ++c) {
                if (gcd(a, b) == 1 && gcd(b, c) == 1 && gcd(a, c) == 1) {
                    validTriples.push_back({a, b, c});
                }
            }
        }
    }
    return validTriples;
}

int countValidTriplesInRange(int l, int r, const vector<tuple<int, int, int>>& validTriples) {
    int count = 0;
    for (const auto& [a, b, c] : validTriples) {
        if (a >= l && a <= r && b >= l && b <= r && c >= l && c <= r) {
            ++count;
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<tuple<int, int, int>> validTriples = precomputeValidTriples();
    
    int t;
    cin >> t;
    
    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << countValidTriplesInRange(l, r, validTriples) << endl;
    }
    
    return 0;
}
