class Solution {
public:
    bool isPalindrome(string s) {
    int size = s.length();
        int j = size - 1;

        for (int i = 0; i <= j; i++, j--) {
            char asi = tolower(s[i]);
            char asj = tolower(s[j]);

            if (!isalnum(asi)) {
                j++;
                continue;
            }
            if (!isalnum(asj)) {
                i--;
                continue;
            }

            if (asi != asj) {
                return false;
            }
        }
        return true; 
    }
     
    
};

// try first 

  /* int size = s.length();
        vector<char>str;
        for(int i=0;i<size;i++){
            int asc = s[i];
            if(asc<97){
                asc+=32;
                str.push_back(asc);
            }
            else if(asc==32){
                continue;
            }
            else if(asc>=97){
                continue;
            }
        }
        int j=size-1;
        for(int i=0;i<j;i++ ){
          if(str[i]==str[j]){
            j--;
            continue;
          }
          else{
            return false;
          }
        }
        return true; */

// try second 
/*   int size = s.length();
     int j = size-1;

     for(int i=0;i<=j;i++,j--){
        int asi= s[i];
        int asj = s[j];
        if(asi>='A' && asi<='Z'){
            asi+=32;
        }
        if(asj>='A' && asj<='Z'){
            asj+=32;
        }

        if(!((asi>='a' && asi<='z') || (asi >= '0' && asi <= '9'))){
            j++;
            continue;
        }
        if(!((asj>='a' && asj<='z') || (asi >= '0' && asi <= '9'))){
            i--;
            continue;
        }

        if(asi!=asj){
            return false;
        }

        
     }
     return true; */

     //with functions 

    /*  int size = s.length();
        int j = size - 1;

        for (int i = 0; i <= j; i++, j--) {
            char asi = tolower(s[i]);
            char asj = tolower(s[j]);

            if (!isalnum(asi)) {
                j++;
                continue;
            }
            if (!isalnum(asj)) {
                i--;
                continue;
            }

            if (asi != asj) {
                return false;
            }
        }
        return true; */
     