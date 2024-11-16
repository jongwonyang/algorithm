#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    string line;
    for (int i = 0; i < T; i++)
    {
        cin >> line;
        cout << line.front() << line.back() << '\n';
    }
}