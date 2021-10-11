// C++ program to sort a given unsorted array of integers in wave form

#include<iostream>
// #include<algorithm>
using namespace std;
 
// void swap_elements(int *a, int *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }
 
// void array_wave(int nums[], int n)
// {
//     sort(nums, nums+n);
 
//     for (int i=0; i<n-1; i += 2)
//         swap_elements(&nums[i], &nums[i+1]);
// }
 
// int main()
// {
//     int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
//     int n = sizeof(nums)/sizeof(nums[0]);
//     cout << "Original array: ";
//     for (int i=0; i < n; i++) 
//     cout << nums[i] <<" ";
//     array_wave(nums, n);
//     cout << "\nWave form of the said array: ";
//     for (int i=0; i<n; i++)
//        cout << nums[i] << " ";
//     return 0;
// }

int main()
{
    int n,a[10],i;
    cout<<"Enter the Number of elements in array"<<endl;
    
    cin>>n;
    
    cout<<"Enter the array elements"<<endl;
    for ( i = 0; i < n; i++)
    {
    cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for (int  j = 0; j < n; j++)
        {
            if(a[j]>a[j+1])
            {
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            }
        }
    }
    if(n%2!=0)
    {
    for ( i = 1; i < n; i+=2)
    {
        int t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
    }
    else
    {
        for ( i = 1; i < n; i+=2)
    {if(i==n-1)
    break;
        int t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
        
    return 0;
}