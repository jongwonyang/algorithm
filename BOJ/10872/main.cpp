#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, ans = 1;
    cin >> N;

    while (N > 0)
    {
        ans *= N;
        N--;
    }

    cout << ans;
}