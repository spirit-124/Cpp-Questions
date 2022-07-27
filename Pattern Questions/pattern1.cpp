/*
==========================================================================================================
1234
1234
1234
1234
*/
// #include <iostream>
// using namespace std;

// int main(){
//     int i=0,row,col;
//     cout<<"Enter No OF Rows:- "<<endl;
//     cin>>row;

//     while(i<row){
//         int j=1;
//         while(j<=row){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;


//     }
//     return 0;
// }



/*
=============================================================================================
4321
4321
4321
4321
*/

// #include <iostream>
// using namespace std;

// int main(){
//     int i=0,row,col;
//     cout<<"Enter No OF Rows:- "<<endl;
//     cin>>row;

//     while(i<row){
//         int j=1;
//         while(j<=row){
//             cout<<row - j +1;
//             j++;
//         }
//         cout<<endl;
//         i++;


//     }
//     return 0;
// }

/*
=====================================================================================================
1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 
*/


// #include<iostream>
// using namespace std;

// int main(){
//     int i = 1, Row;
//     int count=1;

//     cout<<"Enter no of rows:- "<<endl;
//     cin>>Row;
//     while(i<=Row){

//         int j=1;
//         while(j<=Row){
//             cout<<count<<" ";
//             count = count + 1;
//             j++;
//         }
//         cout<<endl;
//     i++;
//     }
    
//     return 0;
// }


/*
==================================================================================================
*
**
***
****
*/


// #include<iostream>
// using namespace std;

// int main(){
//     int i=0 , Row;
//     cout<<"Enter the no. of rows ;-"<<endl;
//     cin>>Row;

//     while(i<Row){
//         int j=0;
//         while(j<=i){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }

/*
======================================================================================
0
11
222
3333
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int i=0 , Row;
//     cout<<"Enter the no. of rows ;-"<<endl;
//     cin>>Row;

//     while(i<Row){
//         int j=0;
//         while(j<=i){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }

/*
==============================================================================================
0
12
234
3456
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int i=0 , Row;
//     cout<<"Enter the no. of rows ;-"<<endl;
//     cin>>Row;

//     while(i<Row){
//         int j=0 , value= i;
//         while(j<=i){
//             cout<<value;
//             value++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }



/*
=============================================================================================
1   
21  
321 
4321
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int i=0 , Row;
//     cout<<"Enter the no. of rows ;-"<<endl;
//     cin>>Row;

//     while(i<Row){
//         int j=0 ;
//         while(j<=i){

//             cout<< i-j+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }

/*
=======================================================================================================
AAAAA
BBBBB
CCCCC
DDDDD
// */
// #include<iostream>
// using namespace std;

// int main(){
//     int i=1 , Row;
//     cout<<"Enter the no. of rows ;-"<<endl;
//     cin>>Row;

//     while(i<Row){
//         int j=1 ;
//         while(j<=Row){
//             char ch = 'A' + i - 1;

//             cout<< ch;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }

/*
=====================================================================================
ABCDE
ABCDE
ABCDE
ABCDE
*/



// #include<iostream>
// using namespace std;

// int main(){
//     int i=1 , Row;
//     cout<<"Enter the no. of rows ;-"<<endl;
//     cin>>Row;

//     while(i<Row){
//         int j=1 ;
//         while(j<=Row){
//             char ch = 'A' + j - 1;

//             cout<< ch;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }

/*
==============================================================================================
ABCDE
BCDEF
CDEFG
DEFGH
*/
// #include<iostream>
// using namespace std;

// int main(){
//     int i=1 , Row;
//     cout<<"Enter the no. of rows ;-"<<endl;
//     cin>>Row;

//     while(i<Row){
//         int j=1 ;
//         while(j<=Row){
//             char ch = 'A' + i + j - 2;

//             cout<< ch;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }


/*
=============================================================================================
A
BB
CCC
DDDD
*/
// #include<iostream>
// using namespace std;

// int main(){
//     int i=1 , Row;
//     cout<<"Enter the no. of rows ;-"<<endl;
//     cin>>Row;

//     while(i<Row){
//         int j=1 ;
//         while(j<=i){
//             char ch = 'A' + i -1;

//             cout<< ch;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }
/*
===================================================================================================
A
BC
CDE
DEFG
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int i=1 , Row;
//     cout<<"Enter the no. of rows ;-"<<endl;
//     cin>>Row;

//     while(i<Row){
//         int j=1 ;
//         while(j<=i){
//             char ch = 'A' + i + j- 2;

//             cout<< ch;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int i=1 , Row;
    cout<<"Enter the no. of rows ;-"<<endl;
    cin>>Row;

    while(i<Row){
        int j=1 ;
        while(j<=i){
            char ch = 'D' - i +j;

            cout<< ch;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}


