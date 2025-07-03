#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int max_value = 0;
    for (int i = 0; i < N; i++)
    {
        int value;

        cin >> value;

        if (value > max_value)
        {
            max_value = value;
        }
    }

    cout << max_value;

    return 0;
}