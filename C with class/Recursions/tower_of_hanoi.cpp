                    //TOWER OF HANOI
          /*          
         // rules
         (1) at a time single disc wll be moved.
         (2) do not put large block or disc into a single disk or block.
         (3) top of the disc wil be moved first always .   if we consider
         the  three block or disc putting in squence (ie.. one two three) in these manner 
          then the block putting on the top will move first.
          */




#include <bits/stdc++.h>
using namespace std;

void toh(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << " move " << n << " from " << a << " to " << c << endl;
        return ;
    }
    toh(n-1, a, c, b);
    cout << " move " << n << " from " << a << " to " << c << endl;
    toh(n-1, b, a, c);
}
int main()
{
    int n;
    cin >> n;
    char a = 'A';
    char b = 'B';
    char c = 'C';
    toh(n, a, b, c);
    return 0;
}




