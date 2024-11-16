#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, X;
    cin >> N >> X;

    int num;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        if (num < X)
            cout << num << ' ';
    }
}