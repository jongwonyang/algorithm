#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b >> c;
    cout << a + b + c - max({ a, b, c }) - min({ a, b, c });
}