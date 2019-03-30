#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, N2, i, count=0;
    char input[1024],check;

    string A, src;
    check = 'R';

    cin >> N >> input;
    N2 = N / 2;

    for(i=0;input[i]!='\0';i++)
    {
        if(input[i]== check )
        {
            count++;
        }
    }
    
    if (N2 < count) {
        A = "Yes";
    }
    else {
        A = "No";
    }

    cout << A << "\n";
}