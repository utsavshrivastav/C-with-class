/*

/* 

Analysis of Algorithms 

okay listen everyone!

Asymptotic Analysis

Time Complexity

time complexity - BAD -> AA; - phone
time complexity - BAD -> A1; - Macbook

// sum of n natural numbers.
// c++ language
// python language


system, compiler, Programming language.
c and c++ > java and python.

time complexity - GOOD -> AA; - phone
time complexity - GOOD -> A1; - Mac




Asymptotic Analysis:

--> here we measure order of growth

--> Does not depend on machine, programming language.

--> No need to implement, we can simply analyse algorithms.

*/

/*
Example:
sum of n natural numbers:

Input: n = 3    //1+2+3
Output: 6

Input: n = 5    //1+2+3+4+5
Output 15

*/





// 1 approach.

// #include<bits/stdc++.h>
// using namespace std;
// int32_t main()
// {
//     int n; //2 //12345909234567890987643
//     cin >> n;
//     cout << (n*(n+1))/2 << endl;
// order of growth = c1
//     return 0;
// }

/*
TYPE 1:
n = 4000;
(n*(n+1))/2;
order of growth = C1

5 == 1+2+3+4+5
15

TYPE 2:

order of growth = n

TYPE 3:

n=3
sum = 0
i, 1 to n; // n times
j, 1 to i; // n times
sum++
// nested loops n*n = n^2; == order of growth;

i = 1
3 times
0+1 = 1+(1+1) = 3 + (1+1+1) = 6


1, n, n^2;
order of growth = n^2;

*/
// order of growth = c1 = theta(1)
// theta(1)
// C1

// 2nd approach

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;
//     for(int i = 1; i<=n; i++){
//         sum = sum+i;
//     }
    // c1+c2*n
// c1 + c2*n = theta(n)
// Order of growth = c1 + c2*(n) = theta(n) = O(n)
//     cout << sum << endl;
//     return 0;
// }

// c2 +  c3n = O(n)

// 3rd approach
// #include<bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int n;
//     cin >> n;//3
//     int sum = 0;

//     for(int i = 1; i<=n; i++){ //n times
//         for(int j = 1; j<=i; j++){ //n times
//             sum++; //1+(1+1)+(1+1+1)
//         }
//         // c1+c2*(n*n)
//         cout << sum << endl;
//     }

//     // order of growth = c1 + c2*(n)^2 = theta(n^2) = O(n^2)
// // c1 + c2*(n^2) = n^2 = theta(n^2)
//     return 0;
// }

// c1 + c2n^2 = n^2

/* Asymptotic Analysis:

--> here we measure order of growth

--> Does not depend on machine, programming language.

--> No need to implement, we can simply analyse algorithms.


*/

// 1st approach - time taken c1 - constant order of growth

// 2nd approach - time taken c1+c2n - linear order of growth
// n - overall order of growth
// 3rd approach - time taken c1 + c2*(n*n) - quadratic order of growth
// overall order of growth = n^2
/* 

Direct way to find the order of growth
1.) Ignore lower order Terms.
2.) Ignore Leading Terms Constant.



n^2



for(int i = 0; i<n; i++){
    //constant work
}



let's suppose there are two order of growth
f(n) = 2*(n)^2 + n + 6 = n^2
g(n) = 100*(n) + 4*(nlogn)+3 = nlogn




how do we compare terms?

c < log(log(n)) < log n < (n)^(1/3) < (n)^(1/2) < (n) < (n)^2 < (n)^3 < (n)^4 < (2)^n < (n)^n


1st question: 
f(n) = c1*logn + c2  = logn
g(n) = c3(n) + c4 log(log(n)) + c5 = n
overall order of growth = n






find the order of growth?
logn , n
overall order of growth = n






2nd question:-
f(n) = c1(n)^2 + c2n + c3 = n^2
g(n) = c4 nlog(n) + c3n + c2 = nlogn






find the order of growth?
f(n) = n^2
g(n) = nlogn




3rd question:
f(n) = c1 + c2(2)^n + c3(n)^n = n^n
g(n) = c4 log(log(n)) + c5n + c6(n)^2 = n^2

overall order of growth= n^n+n^2




4th question:
f(n) = c1n + c2 + c3(log(n))


*/

/*

theta() notation:- exact bound

Big O() notation:- upper bound

Omega() notation:- lower bound
*/



/*
order of growth c1
time complexity = O(1) / theta(1) / omega(1)
time complexity = O(n) / theta(n)


theta - exact order of growth
Big O - upper bound
omega - lower bound



*/