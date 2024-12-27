#include <bits/stdc++.h> 
using namespace std; 

#define MOD 1000000007 
#define INF 1000000000000000003LL 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define pb push_back 
#define pob pop_back 
#define mp make_pair 

int main() { 
    ll N, D; 
    cin >> N >> D; 

    vector<ll> arr(N);
    for (ll i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    ll temp = N;
    ll count = 0;

    for (ll i = N - 1; i >= 0; i--) {
        ll a = 0;
       
            a = (D / arr[i]) + 1;
        

        if (temp <= 0) {
            break;
        }

        temp -= a;
        if (temp >= 0) {
            count++;
        }
    }

    cout << count << endl;

    return 0; 
}

