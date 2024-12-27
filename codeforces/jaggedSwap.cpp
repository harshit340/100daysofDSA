/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */
 
#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1000000007 
 
#define forl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define forr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define pb push_back 
#define pob pop_back 
#define mp make_pair 
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int T; 
    cin >> T; 
    while (T--) { 
        long long int N; 
        cin >> N; 
         vector <long long int> arr(N);
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
         
        vector <long long int> arr2 = arr;
        sort(arr2.begin(), arr2.end());
 

        bool possible ;
 
        for(int i=1 ; i<N-1 ; i++){
            
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                possible=true;
            }
            
            if(!possible){
                break;
            }
        }
          if(arr==arr2) {
            cout << "YES" <<endl;
        } else {
            cout << "NO" << endl;
        }
 
    } 
    return 0; 
} 