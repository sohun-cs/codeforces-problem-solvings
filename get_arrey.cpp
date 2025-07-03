#include <bits/stdc++.h>
using namespace std;

int get_array(int n)
{

    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}

int main()
{

    int N;
    cin >> N;

    get_array(N);

    return 0;
}