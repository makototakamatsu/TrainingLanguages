#include <iostream>
using namespace std;

long long dp[1234567];  // dp[n] = n駅まできて、現在0連続停車
long long sum[1234567]; // sum[n] = n駅まできて、現在1～K-1連続停車

int main()
{
	int N,K;
	cin >> N >> K;

	long long  MOD = 1000000007;

	dp[0]=1;
	sum[1]=1;
	for (int n = 1; n <= N-1; ++n)
	{
		dp[n+1]=sum[n]+dp[n];
		dp[n+1]%=MOD;
		sum[n+1]=sum[n]+dp[n];
		sum[n+1] %= MOD;
		if(n+1>=K)
		{
			sum[n+1]=sum[n+1]-dp[n+1-K]+MOD;
			sum[n+1] %= MOD;
		}
	}

	cout << sum[N] << endl;

	return 0;
}
