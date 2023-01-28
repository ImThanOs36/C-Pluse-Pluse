#include <iostream>

using namespace std;
int main()
{
 //<---------- Refrence Variable ---------> 
    int a = 420;
    int &A = a; // we use A as refrence variable of a
    cout << A<<endl;


// <----------     Constants    ---------->
int m = 90; 
int m = 97;   // we can easily change value of variable if it have no' const '


const int n = 500;
cout<<n<<endl;
int n = 90; // If i try to change the value of const int n then we get a error (given below)

// Variable.cpp: In function 'int main()':
// Variable.cpp:15:5: error: conflicting declaration 'int n'
//  int n = 90;
//      ^
// Variable.cpp:13:11: note: previous declaration as 'const int n'
//  const int n = 500;



    return 0;
}
