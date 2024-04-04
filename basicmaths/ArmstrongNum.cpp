
bool checkArmstrong(int n){
  int tryy = n;
  int count = 0;
  int sum=0;
  while(tryy!=0){
      count ++ ;
      tryy=tryy/10;
  }
  
  for(int i = n ; i>0; i = i/10){
    int digit = i%10;
    sum=sum+pow(digit,count);
  }
  if(sum==n){
    return  true;
  }
  else{
    return false;
  }

}