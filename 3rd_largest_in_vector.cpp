#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    //vector<int> v1={2,3,1,4,6,5,9,7,8};
    cout<<"enter number of element in a vector"<<endl;
    cin>>n;
    vector<int>v1(n);
    cout<<"enter each elements of a vector"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    int first_largest= INT_MIN;
    /*INT_MIN is a constant defined in the header <climits> (or <limits.h> in C).
    It represents the smallest value an int can hold on your system.
    We initialize both variables to the lowest possible value,
    so that any number in the vector will be larger than this initial value.*/
    int second_largest= INT_MIN;
    int third_largest= INT_MIN;
    
    for(int i=0;i<v1.size();i++)
    {
       // int num= v1[i];
        
        if(v1[i]> first_largest)
        {
            third_largest=second_largest;
            second_largest=first_largest;
            first_largest= v1[i];
        }
        if(v1[i]!= first_largest)
        {
            third_largest=second_largest;
            second_largest=v1[i];
        }
    }
    cout<<"third largest element in a vector is:"<<third_largest<<endl;

    return 0;
}
