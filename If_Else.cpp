#include <iostream>

using namespace std;

int main()
{

    int age;
    cout << "Enter Your Age:";
    cin >> age;

    if (age >= 18)
    {

        cout << "You can drink beer" << endl;
    }
    else
    {
        cout << "You can not drink beer !" << endl;
    }

    return 0;
}