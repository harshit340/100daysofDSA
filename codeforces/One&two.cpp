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
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        int count = 0; 
        int digit =1;
        int sum = 0;
        int count1 =0;

        for(int i =0 ;i<N;i++){
            if(arr[i]%2==0){
                count++;
            }
        }
     
        
        if(count==0){
            cout<<1<<endl;
        } else if(count%2==0 && count>=1){
            for(int i = 0 ;i<N ;i++){
               if(arr[i]%2==0){
                count1++; 
               } 
               if(count1 == (count/2)){
                cout<<i+1<<endl;
               break;
               }
            } 
             
        }
        else{
            cout<<-1<<endl;
        }
    } 
    return 0; 
} 
