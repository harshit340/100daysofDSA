#include "bits/stdc++.h" 
using namespace std; 

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
        long long int N; 
        cin >> N; 
        string arr;
        cin >> arr;

        if (N == 1 && arr[0] == '1') {
            cout << "Yes" << endl;
            continue;
        }

        if (N == 1 && arr[0] == '0') {
            cout << "No" << endl;
            continue;
        }

      

        int zeropair = 0;
        int onepair = 0;
        bool inZeroSegment = false;
        bool inOneSegment = false;

        for (int i = 0; i < N; i++) {
            if (arr[i] == '0') {
                if (!inZeroSegment) {
                    inZeroSegment = true;
                    zeropair++;
                }
                inOneSegment = false;
            } else {
                if (!inOneSegment) {
                    inOneSegment = true;
                    onepair++;
                }
                inZeroSegment = false;
            }
        }


        if (zeropair >= onepair) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    } 
    return 0; 
}
