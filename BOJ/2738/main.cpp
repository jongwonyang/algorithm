#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int mat[N][M];
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < M; col++)
        {
            cin >> mat[row][col];
        }
    }

    int num;
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < M; col++)
        {
            cin >> num;
            mat[row][col] += num;
        }
    }

    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < M; col++)
        {
            cout << mat[row][col] << ' ';
        }
        cout << '\n';
    }
}