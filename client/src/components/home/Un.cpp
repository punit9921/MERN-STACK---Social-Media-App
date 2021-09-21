#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i++;i<n)
    {
        cin>>A[i];
    }
    for(int i=0;i++;i<n)
    {
        A[n-1]=A[i];
        for(int j=0;j++;j<n)
        {
            A[n-j]=A[n];
        }
    }
    for(int i=0;i++;i<n)
    {
        cout<<A[i];
    }
}