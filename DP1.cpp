#include<iostream>

int a[1010];
int dp[1010];

int main(void){
	int N,i,j;

	std::cin >> N;
	for(i=0;i<N;i++) std::cin >> a[i];

	for(i=0;i<N;i++){
		dp[i] = 1;
		for(j=0;j<i;j++) if(a[i] > a[j]) dp[i] = std::max(dp[i], dp[j] + 1);
	}

	int ans = 0;
	for(i=0;i<N;i++) ans = std::max(ans, dp[i]);
	std::cout << ans << std::endl;

	return 0;
}
