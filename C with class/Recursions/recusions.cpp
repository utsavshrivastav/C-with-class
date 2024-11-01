/*#include <bits/stdc++.h>
using namespace std;
void fun(int n)
{
    if (n == 0)
        return;

    fun(n - 1);
    cout << n << endl;
    fun(n - 1);
}

int main()
{
    fun(3);
    return 0;
}*/

//analyse this and write a recursive graph for this on your notebook.

/*#include <bits/stdc++.h>
using namespace std;

int fun(int x)
{
    if (x == 1)
        return 0;
    else
        return 1 + fun(x / 2);
}

int main()
{
    cout << fun(16);
    return 0;
}*/

//recusive way to find factorial of any number n.

/* #include <bits/stdc++.h>
using namespace std;

int utsav(int n)
{
    if (n >= 1)
    {
        return n * utsav(n - 1);
    }
    else
        return 1;
}

int main()
{
    int n;
    cin >> n;
    cout << utsav(n);
    return 0;
}
*/

/*
// Recursive way of finding sum of n natural numbers
#include <bits/stdc++.h>
using namespace std;

int utsav(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return n + utsav(n - 1);
}

int main()
{
    int a;
    cin >> a;
    cout << utsav(a);
    return 0;
}
*/

/*
// print all the odd numbers between two intervals

#include <bits/stdc++.h>
using namespace std;

void utsav(int start, int end)
{
    if (start > end)
    {
        return;
    }
    cout << start << " ";
    utsav(start + 2, end);
}

int main()
{
    int a, b;
    cin >> a >> b;
    utsav(a, b);
    return 0;
}
*/

/*
//Write a recursive graph on your notebook and analyse this code


#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0)
        return ;

    fun(n-1);
    cout << n << endl;
    fun(n-1);
}

int main()
{
    fun(3);
    return 0;
}
*/

/*
// Recursive way to print number from n to 1.

#include<bits/stdc++.h>
using namespace std;
void utsav(int n){
    if(n==0){
        return ;
    }
    cout << n << " ";
    utsav(n-1);
}
int main()
{
    int n;
    cin >> n;
    utsav(n);
    return 0;
}
*/

/*
 // Recursive way to print number from 1 to n.

#include<bits/stdc++.h>
using namespace std;
void utsav(int n){
    if(n==0){
        return ;
    }
    utsav(n-1);
    cout << n << " ";
}
int main()
{
    int n;
    cin >> n;
    utsav(n);
    return 0;
}
*/

// Draw recursive graph for this code and analyse it.
//[11:21 PM, 9/7/2021] Sidharth Sir CP: Homework:

//Write a recursive function for finding product of n natural number.

//Write a Recursive function to find the GCD of two numbers using Euclidean Algorithm.

//Write a Recursive function to find all the even numbers till n

//FIBONACCI SERIES IN RECURSION
/*
#include<bits/stdc++.h>
using namespace std;

void fib(int a, int b, int n)
{
  if(n==0){
      return;
  }
  else
  {
      cout << a << " ";
      int nt = a+b;
      a = b;
      b = nt;
      fib(a, b, n-1);
  }
}
  int main()
  {
      int n;
      cin >> n;
      int a =0, b = 1;
      fib(a, b, n);
      cout << endl;
      return 0;
  }
*/
                               
