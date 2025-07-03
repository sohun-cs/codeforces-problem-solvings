#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;

    cin >> N;

    int *A = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int M;
    cin >> M;

    int *B = new int[M]; // Dynamic Array

    for (int i = 0; i < N; i++)
    {
        B[i] = A[i];
    }

    delete[] A; // Delete the dynamic array

    for (int i = N; i < M; i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < M; i++)
    {
        cout << B[i] << " ";
    }

    return 0;
}