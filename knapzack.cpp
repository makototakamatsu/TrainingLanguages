#include<iostream>
//input
int n,W;
int w[MAX_N],v[MAX_N];

//i番目以降の品物から重さの総和がj以下となるように選ぶ
int rec(int i,int j){
  int res;
  if(i==n){
    res==0;
  }else if(j<w[i]){
    res=rec(i+1,j);
  }else{
    res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
  }
  return res;
}

void solve(){
  printf("%d\n",rec(0,W));
}
