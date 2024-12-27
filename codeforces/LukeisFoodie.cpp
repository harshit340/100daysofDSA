#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int count = 0;
        int l = a[0] - x;
        int r = a[0] + x;
        
        for (int i = 1; i < n; ++i) {
            int up_l = max(l, a[i] - x);
            int up_r = min(r, a[i] + x);
            
            if (up_l > up_r) {
                count++;
                l = a[i] - x;
                r = a[i] + x;
            } else {
                l = up_l;
                r = up_r;
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}
