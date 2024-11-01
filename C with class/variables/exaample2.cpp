#include<bits/stdc++.h>
using namespace std;

//char a = 100.4444;
//int a = 213;
float a = 999;


int main()
{
   int a = 1000;
   cout <<"local a:" << a << endl;
   cout <<"global variables a:" << ::a << endl; 
    return 0;
}
