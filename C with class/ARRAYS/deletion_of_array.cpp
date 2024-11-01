#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)

int deletion(int array[], int n, int x)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (array[i] == x)
            break;
    }
    if (i == n)
        return n;

    for (int j = i; j < n - 1; j++)
    {
        array[j] = array[j + 1];
    }
    return n - 1;
}

void solve()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];

    int x;
    cin >> x;

    int k = deletion(array, n, x);

    for (int i = 0; i < k; i++)
        cout << array[i] << " ";
}

int32_t main()
{
    fastio;
    solve();
    return 0;
}
