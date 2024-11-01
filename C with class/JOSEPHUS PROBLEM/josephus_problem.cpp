#include<bits/stdc++.h>
using namespace std;

int jos(int n, int k){
    if(n==1){
        return 0;
    }
    else
    return (jos(n-1, k)+k)%n;
}
/*----------------------------------------------------------------

(jos(4, 3)+3)%5
(((jos(3,3)+3)%4)+3)%5
(((jos(2,3)+3)%3)+3)%4)+3)%5)
(((jos(1,3)+3)%2)+3)%3)+3)%4)+3)%5)

*/

int32_t main()
{
    cout << jos(5,3);
    return 0;
}
