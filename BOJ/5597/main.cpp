#include <bits/stdc++.h>
using namespace std;

#define NUM_STUDENTS 30

bool submit[NUM_STUDENTS + 1];

int main()
{
    int student;
    for (int i = 0; i < NUM_STUDENTS - 2; i++)
    {
        cin >> student;
        submit[student] = true;
    }

    for (int i = 1; i <= NUM_STUDENTS; i++)
    {
        if (!submit[i])
            cout << i << '\n';
    }
}