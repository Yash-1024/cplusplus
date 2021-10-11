#include<iostream>

using namespace std;

int main()
{
    int i,n,j,a[10],t;
    cout<<"Enter the Number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
    for ( j = 0; j < n; j++)
    {
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
    }
        cout<<"The largest number in the array is : "<<a[n-1]<<endl;
    return 0;
}

    