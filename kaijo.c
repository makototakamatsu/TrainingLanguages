int fact(int n){
  if(n<=0)/*nは誤り*/
  {
    printf("Illegal input n=%d\n",n);
    exit(1);
  }else{/*nは正*/
    if(n==1)return(1);/*n==1*/
    else return(n*fact(n-1));
    /*factの再帰関数*/
  }
}
