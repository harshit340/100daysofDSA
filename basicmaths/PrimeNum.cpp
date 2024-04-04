bool isPrime(int n)
{
    int count = 0 ;
	for(int i=1;i*i<=n;++i){
		if(n%i==0){
			if(i*i==n){
				count++;
			}else{
				count +=2;
			}
		}
	}
	if(count==2){
		return true;
	}
	else{
		return false;
	}
}

// sieve of eratosthenes 

//Mark all the numbers as prime numbers except 1
//Traverse over each prime numbers smaller than sqrt(N)
//For each prime number, mark its multiples as composite numbers
//Numbers, which are not the multiples of any number, will remain marked as prime number and others will change to composite numbers.


void sieve(int N) {
        bool isPrime[N+1];
        for(int i = 0; i <= N;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i * i <= N; ++i) {
             if(isPrime[i] == true) {                    //Mark all the multiples of i as composite numbers
                 for(int j = i * i; j <= N ;j += i)
                     isPrime[j] = false;
            }
        }
    }