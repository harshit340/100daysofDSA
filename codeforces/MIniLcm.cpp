#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        ll N;
        cin >> N;
        
        ll div = 0;
        
        
        for (ll i = 2; i * i <= N; ++i) {
            if (N % i == 0) {
                div = i;
                break;
            }
        }
        
        if (div == 0) {
            
            cout << 1 << " " << N - 1 << endl;
        } else {
           
            ll ans1 = N / div;
            ll ans2 = N - ans1;
            
            cout << ans1 << " " << ans2 << endl;
        }
    }
    
    return 0;
}

