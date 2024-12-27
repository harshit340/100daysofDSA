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
        int arr[N];
        for(int i = 0 ; i<N ; i++){
            cin>>arr[i];
        }
        int sum = 0;
        int countN=0;
        int count=0;
        int product = 1;
        for(int i=0;i<N ;i++){
            if(arr[i]==-1){
                countN++;
            }
           sum = sum + arr[i];
           product = product * arr[i];
        }
         
        if(sum>=0){
            count = 0;
        }else{
            if(abs(sum)%2 ==0){
                count = abs(sum)/2;
                for(int i=0; i<count ;i++){
                    product *= -1;
                }
            }else{
                count = (abs(sum)/2)+1;
                for(int i=0; i<count;i++){
                    product*=-1;
                }
            }
        }
        if(product == 1){
            cout<<count<<endl;
        }else{
            cout<<count+1<<endl;
        }

    } 
    return 0; 
} 
