#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0)

int insertion(int array, int n, int ele, int position, int capacity){
    if(capacity == n){
        return n;
    }

    int index = position-1;
    for(int i = n-1; i>=index; i--){
        array[i+1] = array[i]
    }
    array[index] = ele;
    return n+1;
}

int32_t main()
{
    fastio;
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    
    return 0;
}
