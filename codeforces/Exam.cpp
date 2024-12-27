/* username: Harshit shrivastava (cf, cc, leetcode, atcoder) */

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
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
   
        long long int N; 
        cin >> N; 

        vector<pair<int,int>>arr;
  
    for (int i = 0; i < N; i++) {
         int value,key; 
         cin >> value >> key;
         arr.push_back(make_pair(value,key));
    }

    sort(arr.begin() , arr.end());
       
      
        int max = INT_MIN;

        for(int i=0;i<N;i++){
            if(max<=arr[i].second){
                max=arr[i].second;
                
            }else{
                max=arr[i].first;
            }
        }

        cout<<max;


  
    return 0; 
} 
