#include <iostream>
#include <string.h>

using namespace std;
typedef struct student
{
    char name[100];
    int roll;
    float cgpa;
} stud;
int main()
{
    stud th;
    strcpy(th.name, "ThanOs");
    cout << th.name;
    return 0;
}