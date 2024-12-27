/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */

#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
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
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int T; 
    cin >> T; 
    while (T--) { 
        long long int N; 
        cin >> N;
        vector<int>arr(N);

        for(int i = 0 ; i < N ;i++){
            cin>>arr[i];
        } 

        if(N==1){
            cout<<-1<<endl;
            continue;
        }
        int count = 1;
        int count1 = 0;
        int mini = INT_MAX;
        for(int i = 1 ; i< N ;i++){

            if(count == 1){
                count1++;
            }

            if(arr[i] == arr[i-1]){
               count++; 
            }else{
                count = 1;
            }
    
            mini = min(mini , count);
        }

        if(mini == N){
            cout<<-1<<endl;
        }else{
            cout<<mini<<endl;
        }


    } 
    return 0; 
} 
