/*
Move semantics allows ownership of resources (like dynamic memory) to be transferred from one
object to another without copying.

Purpose: Improve performance by avoiding expensive deep copies.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class MC 
{
    int *ptr;
    public:
    
    MC(int val)
    {
        ptr= new int (val);
        cout<<"constructor called"<<endl;
        
    }
    MC(MC&& obj)
    {
        ptr=obj.ptr;
        obj.ptr=nullptr;
        cout<<"Move constructor called"<<endl;
        
    }
    MC & operator=(MC&& obj)
    {
        if(this!=&obj)
        {
            delete ptr;
            ptr=obj.ptr;
            obj.ptr=nullptr;
            
        }
        return *this;
    }
    ~MC()
    {
        delete ptr;
        cout<<"Destructor called"<<endl;
    }
    void show()
    {
        if(ptr)
        {
            cout<<*ptr<<endl;
            
        }
        else
        cout<<"empty"<<endl;
    }
};
int main()
{
    MC a(45);
    a.show();
    MC b= move(a);
    a.show();
    b.show();
    return 0;
    
}
