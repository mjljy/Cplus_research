#include<stdio.h>
#include <iostream>
using namespace std;
int dp[6001], w[501], v[501], nums[501];//dp[i]表示背包容量为i时所获得最大价值
int n, m;


int max(int x, int y) {
	return x > y ? x : y;
}
int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d%d%d", &v[i], &w[i], &nums[i]);
	}
	for (int i = 1; i <= n; i++) {//枚举物品个数
		for (int j = m; j >= 1; j--) {//逆序枚举背包容量，01背包的扩展
			for (int k = 0; k <= nums[i]; k++) {//枚举物品个数
				if (j >= k * v[i]) {//如果背包容量大于此时物品重量
					dp[j] = max(dp[j], dp[j - k * v[i]] + k * w[i]);//可以选择，并且判断选还是不选最优
				}
			}
		}
	}
	printf("%d", dp[m]);
	cin.get();
	return 0;
}