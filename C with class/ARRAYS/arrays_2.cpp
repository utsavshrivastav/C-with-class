#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0)

int32_t main()
{
    fastio;
    int n;
    cin >> n;
    int array[n];

    for(int i = 0; i<n; i++)
    {
        cin >> array[i];
    }

    for(int i = n-1; i>=0; i--)
    {
    cout << array[i] << " ";
    }

    return 0;
}
