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

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,x1,y1,r1,x2,y2,r2;

	cin >> n;

	for (int i = 0; i < n;i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		//두 좌표 사이의 거리 루트 해야 하는데 그냥 반지름도 제곱으로 처리
		int d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
		/*
			d = r1+r2 ~ 접점 1개
			r2-r1 < d < r2+r1 ~ 접점 2개
			그 이외 0개
		*/

		int distant1 = (r1 + r2) * (r1 + r2);
		int distant2 = (r1 - r2) * (r1 - r2);

		
		if (d == 0) {
			if (distant2 == 0) cout << -1 << "\n";
			else cout << 0 << "\n";
		}
		//접점
		else if (distant1 == d || distant2 == d) {
			cout << 1 << "\n";
		}
		//사이
		else if (distant1 > d && distant2 < d) {
			cout << 2 << "\n";
		}
		//그 이외
		else cout << 0 << "\n";
		
	}


	return 0;

}