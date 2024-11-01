//PALINDROME IN STRING
#include<bits/stdc++.h>
using namespace std;

bool pal(string s, int start, int end){
    if(start>=end){
        return true;
    }
    return(s[start]==s[end] && pal(s, start+1, end-1));
    //abcd
}

int main()
{
    string str;
    cin >> str;
    if(pal(str, 0, str.length()-1)){
        cout << "palindrome" << endl;
    }
    else
    cout << "not a palindrome" << endl;
    return 0;
}




/*
#include<bits/stdc++.h>
using namespace std;

// NON TAIL RECURSION 

int fun(int n)
{
    if(n==0 || n==1)
    return 1;
    return n* fun(n-1);
}


//TAIL RECURSION

int fact(int n, int k)
{
    if(n==0 || n==1)
    {
        return k;
    }
    return fact(n-1,k*n);
}
*/

    

























