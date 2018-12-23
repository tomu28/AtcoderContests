#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, H, W;
    int a[1200], b[1200];
    cin >> N >> H >> W;
    for (int i = 0; i < N; ++i)
        cin >> a[i] >> b[i];

    int count = 0;
    for (int i = 0; i < N; ++i)
    {
        if (H <= a[i] & W <= b[i])
            ++count;
    }

    cout << count << "\n";
}