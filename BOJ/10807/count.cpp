#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int num, count[201] = { 0 };
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        count[num + 100]++;
    }

    int v;
    cin >> v;

    cout << count[v + 100];
}