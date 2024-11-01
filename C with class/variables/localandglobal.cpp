#include <bits/stdc++.h>
using namespace std;
int a=90;
int main()
{
int a=67;
cout<<"local a: "<<a<<" Global a: "<<::a;
::a=20;
cout<<"\nlocal a: "<<a<<" Global a: "<<::a;
return 0;
}