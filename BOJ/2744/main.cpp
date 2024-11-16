#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin >> word;
    for (char& c : word)
    {
        if (c <= 'Z')
            c = c - 'A' + 'a';
        else
            c = c - 'a' + 'A';
    }
    cout << word;
}