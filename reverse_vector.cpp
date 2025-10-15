#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"eneter n elements of vector"<<endl;
    cin>>n;
    vector<int> v1(n);
    cout<<"enter n elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
        
    }
    int start=0;
    int end=n-1;
    
    while(start<end)
    {
        int temp=v1[start];
        v1[start]=v1[end];
        v1[end]=temp;
    
    start++;
    end--;
    }
    cout<<"reversed vector"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v1[i];
    }
    
    return 0;
}
