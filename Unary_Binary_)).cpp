#include <bits/stdc++.h>
using namespace std;

class BO
{
    int a,b;
    public:
    BO()
    
    {
        cout<<"ctor called"<<endl;
    }
    BO(int x,int y): a(x),b(y){}
    
    void show()
    {
        cout<<a<< " " <<b<<endl;
    }
    
    BO operator --()
    {
        --a;
        --b;
        
        return *this;
    }
    
    BO operator --(int )
    {
        BO temp=*this;
        a--;
        b--;
        return temp;
    }
    
    BO operator*( BO &obj)
    {
        BO k;
        k.a=a*obj.a;
        k.b=b*obj.b;
        return k;
    }
   ~BO()
   {
       cout<<"dtor called"<<endl;
   }
};

int main() {
  
  BO b1(4,4);
  BO b2(2,6);
  BO b3;
  b3=b1*b2;
  b3.show();
  --b3;
  
  b3.show();
  b1--;
  b2--;
  b1.show();
  b2.show();
  b3=b1*b2;
  b3.show();
    return 0;
}
