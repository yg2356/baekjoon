#include <iostream>
#include <cstring>
 
#define endl "\n"
#define MAX 40
using namespace std;
 
int N, M;
int DP[MAX][MAX];
 
void Initialize()
{
    memset(DP, 0, sizeof(DP));
}
 
void Input()
{
    cin >> N >> M;
}
 
void Solution()
{
    for (int i = 1; i <= M; i++) DP[1][i] = i;
    for (int i = 2; i <= N; i++)
    {
        for (int j = i; j <= M; j++)
        {
            for (int k = j; k >= i; k--)
            {
                DP[i][j] = DP[i][j] + DP[i - 1][k - 1];
            }
        }
    }
    cout << DP[N][M] << endl;
}
 
void Solve()
{
    int Tc; cin >> Tc;
    for (int T = 1; T <= Tc; T++)
    {
        Initialize();
        Input();
        Solution();
    }
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    //freopen("Input.txt", "r", stdin);
    Solve();
 
    return 0;
}
