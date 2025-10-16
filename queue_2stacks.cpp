#include <bits/stdc++.h>
using namespace std;

class Q 
{
    
    stack<int> s1;
    stack<int>s2;
    public:
    void enqueue(int x)
    {
        s1.push(x);
    }
    void deque()
    {
        if(s2.empty())
        {
            if(s1.empty())
            {
                cout<<"Queue is empty"<<endl;
                return;
            }
        }
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s2.pop();
    }
    int front()
    {
        if(s2.empty())
        {
            if(s1.empty())
            {
                cout<<"Queue is empty"<<endl;
                return -1;
            }
        }
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
       return s2.top();
    }
    bool empty()
    {
        return s1.empty() &&s2.empty();
    }
};
int main()
{
    Q q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    
    cout<<q.front()<<endl;
    
    q.deque();
    
   cout<<q.front()<<endl;
   
   q.deque();
   

    return 0;
}
