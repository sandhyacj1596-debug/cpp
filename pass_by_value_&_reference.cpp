/*
pass by value is passing a copy of an actual parameter to the function, and 
changes made to the parameter inside function does not affect original variable.

IN pass by refernce ,it receives a refernce to the actual parameter, and 
changes made to the parameter inside function affects the original variable
*/
#include <iostream>
using namespace std;
void add(int x)//pass by value, void add(int &x) => pass by reference
{
    x=x*10;
    cout<<x<<endl;
}
int main()
{
 int num=20;
 add(num);
cout<<num<<endl;

    return 0;
}
