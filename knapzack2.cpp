#include<iostream>
int dp[MAX_N+1][MAX_W+1];//メモ化テーブル

int rec(int i,int j){
  if(dpp[i][j]>=0){
    return dp[i][j];
  }
  int res;
  if(i==n){
    res=0;
  }else if(j<w[i]){
    res=rec(i+1,j);
  }else{
    res=max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
  }
  //結果をテーブルに記憶する
  return dp[i][j]=res;
}
void solve(){
  memset(dp,-1,sizeof(dp);
  printf("%d\n",rec(0,W));
}
