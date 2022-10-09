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

int N, M;
int arr[201][201], route[201];
int link[201];

int find(int x) {
	if (x == link[x]) return x;
	return link[x] = find(link[x]);
}

void unite(int a, int b) {
	a = find(a);
	b = find(b);
	
	if (a > b) link[a] = b;
	else if (a < b) link[b] = a;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 1;i <= N;i++)link[i] = i;

	for (int i = 1; i <= N;i++) {
		for (int j = 1;j <= N;j++) {
			cin >> arr[i][j];

			if (arr[i][j] == 1 && i != j) {
				unite(i, j);
			}
		}
	}

	for (int i = 1;i <= M;i++) cin >> route[i];

	for (int i = 1; i < M;i++) {
		int r1 = route[i];
		int r2 = route[i + 1];

		r1 = find(r1);
		r2 = find(r2);

		if (r1 != r2) {
			cout << "NO" << "\n";
			return 0;
		}

	}

	cout << "YES" << "\n";

	
	
	return 0;

}