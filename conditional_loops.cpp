/* program of cin and loop and nesting and while loop */ 


// #include <iostream>
// using namespace std;
// int main()
// {

//     int a = 2;
//     int b;
//     cout << "enter the value of b \n";
//     cin >> b;
//     if (a > b)
//     {
//         cout << "a is bigger\n";
//     }
//     else
//     {
//         cout << "b is bigger\n";
//     }

//     int c;
//     cout << "enter the value of c\n";
//     cin >> c;
//     if (c > 0)
//     {
//         cout << "c is positive\n";
//     }

//     else if (c < 0)
//     {
//         cout << "c is negative\n";
//     }
//     else
//     {
//         cout << "c is zero";
//     }

//     int d = 1;
//     while (d < 10)
//     {
//         cout << "*\n";
//         d = d + 1;
//     }
//     d = 0;
//     do
//     {
//         cout << '#' << "\n";
//         d = d + 1;

//     } while (d < 10);

//     for (int i = 0; i < 10; i++)
//     {
//         cout << i + 1 << "\n";
//     }

//     int f;
//     cout << "enter the value of f to draw pattern ";
//     cin >> f;
//     int i = 1;
//     while (i <= f)
//     {
//         int j = 1;
//         while (j <= f)
//         {
//             cout << f - j + 1 << " ";
//             j = j + 1;
//         }
//         cout << "\n";
//         i = i + 1;
//     }

//     return 0;
// }




// program of while loop for making pattern 

// #include<iostream>
// using namespace std;
// int main (){
//     //  pattern using while loop 
//     //  1
//     //  23
//     //  345
//     //  4567

//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     int row = 1;

//     while (row<=n)
//     {    int count = row;
//         int col = 1;
//         while ( col<=row)
//         {
//             cout<<count;
//             count =count +1;
//             col= col+1;
            

//         }cout<<"\n";
//         row=row+1;
//     }
    
// }




// pattern using whilel loop without using count variable 
// #include<iostream>
// using namespace std;
// int main (){
//     //  pattern using while loop 
//     //  1
//     //  23
//     //  345
//     //  4567

//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     int row = 1;

//     while (row<=n)
//     {   
//         int col = row;
//         while ( col<row*2)
//         {
//             cout<<col;
           
//             col= col+1;
            

//         }cout<<"\n";
//         row=row+1;
//     }
    
// }


// pattern 
// 1
// 21
// 321
// 4321

// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin>>n;
     
//      int row=1;
//      while (row<=n)
//      {
//         int col = 1 ;
//         int count = row;
//         while (col<= row)
//         {

//             cout<<count; /*we can also use i-j+1*/
//             col++;
//             count--;

//         }
        
//         cout<<"\n";
//        row++;
//      }
     

// }

#include<iostream>
using namespace std;
int main()
{
    int n=3;
    int i=1;
        char alp='A';
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout <<alp;
           j++;
           
        }
        alp=alp+1;
        cout<<"\n";
        i++;
    }
 
    return 0;
}
