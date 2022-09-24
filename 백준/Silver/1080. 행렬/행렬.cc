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

int A[51][51];
int B[51][51];
bool trans[51][51] = { 0, };

void change(int x, int y) {
	for (int i = x; i < x + 3;i++) {
		for (int j = y;j < y + 3;j++) {
			A[i][j] = !A[i][j];
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			char c;
			cin >> c;
			A[i][j] = c - '0';
		}
	}
	

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			char c;
			cin >> c;
			B[i][j] = c - '0';
		}
	}
   

	int ans = 0;
	for (int i = 0; i < n - 2;i++) {
		for (int j = 0; j < m - 2;j++) {
			if (A[i][j] != B[i][j]) {
				change(i, j);
				ans++;
			}
		}
	}

	for (int i = 0; i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (A[i][j] != B[i][j]) {
				cout << -1 << "\n";
				return 0;				
			}
		}
	}

	cout << ans << "\n";
  

	return 0;

}