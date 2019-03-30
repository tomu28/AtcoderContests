#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int A , B, C;
    cin >> A >> B >> C;

    string S;

    if (A == B && A == C) {
            S = "Yes";
    }
    else {
        S = "No";
    }

    cout << S << "\n";
    return 0;

}