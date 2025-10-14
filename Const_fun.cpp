/* 
constant member functions :
It is a functions, which does modify the data members of the object it is called on.
it is declared using const keyaord after function definition
*/
#include <iostream>
using namespace std;

class student
{
    string name;
    int marks;
    public:
    student(string n,int m) : name(n),marks(m){ }  //initializer list
   /* {
        name=n;
        marks= m;
        
    }*/
    void display() const
    {
        cout<<name<<" "<<marks<<endl;
        
    }
    void updatemarks(int m)
    {
        marks= m;
    }
};
int main()
{
  const student s1("san" ,25);
  s1.display();
  // s1.updatemarks(30);  //generates error due modification of const member
  student s2("dilli",30);
  s2.display();
  s2.updatemarks(50);
  s2.display();
  

    return 0;
}
