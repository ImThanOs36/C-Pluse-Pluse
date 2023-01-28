#include <iostream>  

using namespace std;
int Global_number = 36; //This is a Global variable
int main(){



cout<< "Hello Guys";


// int Local_number = 36;
int Global_number = 50; //This is a local variable with same name of global varible
cout<<"The the value of Local Global_number is :"<<Global_number<<endl;
cout<<"If I want to access the Global Global number Then we can write \n'::' befor global variable name ex :- <<::abc"<<endl;


cout<<"The value of the Global Global_number is :"<<::Global_number;







    return 0;
}

