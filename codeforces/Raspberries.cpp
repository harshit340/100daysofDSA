#include "bits/stdc++.h" 
using namespace std; 

#define mod 1000000007 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define pb push_back 
#define pob pop_back 
#define mp make_pair 

int main() { 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int T; 
    cin >> T; 
    while (T--) { 
        long long int N, K; 
        cin >> N >> K;
        vector<int> arr(N);

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        if (K == 2 || K == 3 || K == 5) {
            int minOperations = INT_MAX;
            bool divisible = false;

            for (int i = 0; i < N; i++) {
                if (arr[i] % K == 0) {
                    divisible = true;
                    break;
                } else {
                    int remainder = arr[i] % K;
                    int operations = min(remainder, K - remainder);
                    minOperations = min(minOperations, operations);
                }
            }

            if (divisible) {
                cout << 0 << endl;
            } else {
                cout << minOperations << endl;
            }

        } else if (K == 4) {
            int countEven = 0;
            bool divisibleBy4 = false;

            for (int i = 0; i < N; i++) {
                if (arr[i] % 4 == 0) {
                    divisibleBy4 = true;
                    break;
                } else if (arr[i] % 2 == 0) {
                    countEven++;
                }
            }

            if (divisibleBy4) {
                cout << 0 << endl;
            } else {
                // If there are 2 or more even numbers
                if (countEven >= 2) {
                    cout << 0 << endl;
                } else {
                    // We need at least two even numbers, find minimum operations
                    cout << max(0, 2 - countEven) << endl;
                }
            }
        }
    }
    
    return 0; 
}

