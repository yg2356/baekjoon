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

#include <string>
#include <vector>
#include <map>
#include<algorithm>
#include<utility>

using namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc;
	cin >> tc;


	while (tc--) {
		int a, b, ans;

		cin >> a >> b;

		int len = b - a;

		int d = sqrt(len);

		if (pow(d, 2) == len) {
			ans = d * 2 - 1;
		}
		else ans = d * 2;

		if (len > d * (d + 1))ans++;

		cout << ans << "\n";
	}
  

	return 0;

}