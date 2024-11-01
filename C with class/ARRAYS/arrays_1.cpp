#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    int arrays[n];
    for (int i = 0; i < n; i++)  //here i<=n-1
    {
        cin >> arrays[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arrays[i] << " ";
    }
    
    return 0;
}
