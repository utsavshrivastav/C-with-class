#include <bits/stdc++.h>
using namespace std;
/*
// 100 100
if(a > b)
{
    a = a-b;
}
else if(b > a)
{
    b = b-a;
}
else 
return a; 
*/

int GCD(int a, int b)
{
    if (a > b)
    {
        return GCD(a - b, b);
    }
    else if (b > a)
    {
        return GCD(b, b - a);
    }
    else
        return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b) << endl;
    return 0;
}
