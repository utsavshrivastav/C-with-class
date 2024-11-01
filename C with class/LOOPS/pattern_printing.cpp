/* #include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n;
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        for(int k=2*(n-i) ; k>=1; k-- )
        {
            cout<<"  ";
        }
        
        for(int l=1; l<=i; l++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-1 ; i>=1 ; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        for(int k=2*(n-i) ; k>=1; k-- )
        {
            cout<<"  ";
        }
        
        for(int l=1; l<=i; l++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
return 0;
}
*/




// #include<bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int n;
//     cin>>n;

//     for(int i=1 ; i<=n ; i++)
//     {
// for(int j=1 ; j<=n ; j++)
// {
//     if (j<=(n-i))
//     {
//         cout<<" ";
//     }
//     else
//     cout<<i<<" ";
// }
// cout<<endl;
//     }
//     for(int i=(n-1) ; i>=1 ; i--)
//     {
// for(int j=1 ; j<=n ; j++)
// {
//     if (j<=(n-i))
//     {
//         cout<<" ";
//     }
//     else
//     cout<<i<<" ";
// }
// cout<<endl;
//     }

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int n;
//     cin>>n;

//     for(int i=1 ; i<=n ; i++)
//     {
// for(int j=1 ; j<=n ; j++)
// {
//     if (j<=(n-i))
//     {
//         cout<<" ";
//     }
//     else
//     cout<<i<<" ";
// }
// cout<<endl;
//     }
//     for(int i=(n-1) ; i>=1 ; i--)
//     {
// for(int j=1 ; j<=n ; j++)
// {
//     if (j<=(n-i))
//     {
//         cout<<" ";
//     }
//     else
//     cout<<i<<" ";
// }
// cout<<endl;
//     }

//     return 0;
// }




//     0   
//    0 0  
//   0   0 
//  0     0
// 0       0
//  0     0
//   0   0
//    0 0
//     0

// #include<bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int n;
//     cin>>n;

//     for(int i=1 ; i<=n ; i++)
//     {
//         for (int j=1 ; j<=n ; j++)
//         {
//             if(j<=(n-i))
//             {
//             cout<<" ";

//             }
//         }
//         for(int j=1 ; j<=i ; j++)
//         {
//             if(i==1  || j==1 || j==i )
//             {
//                 cout<<"0 ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//     cout<<endl;
//     }
//     for(int i=n-1 ; i>=1 ; i--)
//     {
//         for (int j=1 ; j<=n ; j++)
//         {
//             if(j<=(n-i))
//             {
//             cout<<" ";

//             }
//         }
//         for(int j=1 ; j<=i ; j++)
//         {
//             if(i==1  || j==1 || j==i )
//             {
//                 cout<<"0 ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//     cout<<endl;
//     }
       


//     return 0;
// }




// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15


// #include<bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int n , p=1;
//     cin>>n;

//     for(int i=1 ; i<=n ; i++)
//     {
//         for(int j=1 ; j<=i ; j++)
//         {
//             cout<<p<<" ";
//             p++;
//         }
//         cout<<endl;
//     }

//     return 0;
// }





 // PAttern printing

// * * * * *
// * * * *
// * * *
// * *
// *
// #include<bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int n;
//     cin>>n;

// for(int i=1 ; n>=i; n--)
// {
//     for(int j=1 ; j<=i ; j++)
//     {
//         cout<<"* ";
//     }
// cout<<endl;
// }

//     return 0;
// }





// * * * * *
// * * * *
// * * *
// * *
// *
// * *
// * * *
// * * * *
// * * * * *

// #include<bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int n;
//     cin>>n;

// for(int i=n ; i>=1; i--)
// {
//     for(int j=1 ; j<=i ; j++)
//     {
//         cout<<"* ";
//     }
// cout<<endl;
// }
// for(int i=2 ; i<=n; i++)
// {
//     for(int j=1 ; j<=i ; j++)
//     {
//         cout<<"* ";
//     }
// cout<<endl;
// }

//     return 0;
// }






//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// #include <bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }
// return 0;
// }






//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
// #include <bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }
//     for (int i = n-1; i>=1; i--)
//     {
//         for (int j = 1; j <=n-i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }

//     return 0;
// }





//     *
//    * *
//   *   *
//  *     *
// * * * * *
// #include <bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             if(j==1 || j==i || i==n)
//            { cout << "* ";}
//            else
//            {
//                cout<<"  ";
//            }
//         }

//         cout << endl;
//     }
// return 0;
// }





//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *

// #include <bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             if(j==1 || j==i )   // here changing
//            { cout << "* ";}
//            else
//            {
//                cout<<"  ";
//            }
//         }

//         cout << endl;
//     }
//     for (int i = n-1; i>=1; i--)   // here changing
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             if(j==1 || j==n || j==i )
//            { cout << "* ";}
//            else
//            {
//                cout<<"  ";
//            }
//         }

//         cout << endl;
//     }
// return 0;
// }




// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// #include <bits\stdc++.h>
// using namespace std;

// int32_t main()
// {

// int n;
// cin>>n;

// for(int i=1 ; i<=n ; i++){
// for(int j=1 ; j<=n; j++)
// {

//     cout<<"* ";

// }
// cout<<endl;
// }
//     return 0;
// }




// * * * * *
// *       *
// *       *
// *       *
// * * * * *
// #include <bits\stdc++.h>
// using namespace std;

// int32_t main()
// {

// int n;
// cin>>n;

// for(int i=1 ; i<=n ; i++){
// for(int j=1 ; j<=n; j++)
// {
//    if(i==1 || j==1 || i==n || j==n)
//     cout<<"* ";
//     else
//     cout<<"  ";

// }
// cout<<endl;
// }
//     return 0;
// }




// * * * * *
// * *     *
// *   *   *
// *     * *
// * * * * *
// #include <bits\stdc++.h>
// using namespace std;

// int32_t main()
// {

// int n;
// cin>>n;

// for(int i=1 ; i<=n ; i++){
// for(int j=1 ; j<=n; j++)
// {
//    if(i==1 || j==1 || i==n || j==n || j==i)
//     cout<<"* ";
//     else
//     cout<<"  ";

// }
// cout<<endl;
// }
//     return 0;
// }




// * * * * *
// * *   * *
// *   *   *
// * *   * *
// * * * * *
// #include <bits\stdc++.h>
// using namespace std;

// int32_t main()
// {

// int n;
// cin>>n;

// for(int i=1 ; i<=n ; i++){
// for(int j=1 ; j<=n; j++)
// {
//    if(i==1 || j==1 || i==n || j==n || j==i || j==(n+1)-i)
//     cout<<"* ";
//     else
//     cout<<"  ";

// }
// cout<<endl;
// }
//     return 0;
// }




//     * * * * *
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *

// #include <bits/stdc++.h>
// using namespace std;

// int32_t main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= n; j++)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }
// return 0;
// }