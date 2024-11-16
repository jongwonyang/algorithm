#include <bits/stdc++.h>
using namespace std;

int N, num, arr[201];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        arr[num + 100]++;
    }

    cin >> num;
    cout << arr[num + 100];
}