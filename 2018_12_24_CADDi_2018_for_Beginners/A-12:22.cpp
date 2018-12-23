#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int count_underscores(string s)
{
    int count = 0;

    for (int i = 0; i < s.size(); i++)
        if (s[i] == '2')
            count++;

    return count;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string str;
    cin >> str;

    cout << count_underscores(str) << "\n";
}