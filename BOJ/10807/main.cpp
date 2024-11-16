#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int v;
    cin >> v;

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == v)
            ans++;
    }

    cout << ans;
}