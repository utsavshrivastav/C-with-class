#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0)

int32_t main()
{
    fastio;
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
               // n -time complexity of this loop
    for (int i = 0; i < n; i++)
    {
        cout << array[i]*10 << " ";
    }
            // n - similar to above 
    cout << endl;

    for (int i = n-1; i>=0; i--)
    {
        cout << array[i]*10 << " ";
    }
    
    //n+n+n= 3n = n   - total time complexity
    return 0;
}
