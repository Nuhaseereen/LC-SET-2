bool isPowerOfTwo(int n) {
if(n==1){
    return 1;
}
else if(n%2==0 ){
    int k;
   for(k=0;k<=31;k++){
     if(pow(2,k)==n){
      return 1;
     }
   }
}
   return 0;
}
