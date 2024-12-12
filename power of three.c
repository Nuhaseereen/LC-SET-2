bool isPowerOfThree(int n) {
if(n%3==0 ||n==1 ){
    int k;
   for(k=0;k<=31;k++){
     if(pow(3,k)==n){
      return 1;
     }
   }
}
return 0;
}
