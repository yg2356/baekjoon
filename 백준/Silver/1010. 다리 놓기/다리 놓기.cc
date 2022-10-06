#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<stack>
#include<cstring>
#include<string>
#include<functional>
#include<list>
#include<deque>  
#include<map>
#include<fstream>
#include<time.h>
#include <unordered_set>
#include<set>
#include<tuple>
#include<climits>

using namespace std;

int dp[31][31];
int tc, west, east, ans;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> tc;

	while (tc--) {
		memset(dp, 0, sizeof(dp));
		cin >> west >> east;

		for (int i = 1; i <= east;i++)dp[1][i] = i;

		for (int i = 2; i <= west;i++) {

			//dp[2][2] = dp[1][1]
			//dp[2][3] = dp[1][2] + dp[1][1]

			for (int j = i;j <= east;j++) {		

				for (int k = j; k >= i;k--) {
					dp[i][j] = dp[i][j] + dp[i - 1][k - 1];
				}
			}
		}

		cout << dp[west][east] << "\n";
	}
	
	return 0;

}