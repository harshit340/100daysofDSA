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


bool isPrime(int n)
{
     bool isitprime[n+1];

	 for(int i=0;i<n;i++)
	 {
		 isitprime[i]=true;
	 }

	 isitprime[0]=false;
	 isitprime[1]=false;
     
	 for(int i=2;i*i<n;i++){
		 if(isitprime[i]==true){
			 for(int j=i*i;j<n;j+=i){
				 isitprime[j]=false;
			 }
		 }
	 }

}