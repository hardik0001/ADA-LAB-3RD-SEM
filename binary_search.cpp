#include <iostream>
using namespace std;



int binarysr( int a[], int n, int data)
{
    int l=0 , r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if (data == a[mid])
        {
            return mid+1;
        }
        else if(data<a[mid])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }

    }
    return -1;

}

int main(void)
{
    int a[50], size;
    cout<<"enter the size of an array ";
    cin>>size;
    cout<<"enter the element of array ";
    for(int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int num, index;

    cout<<"element you want to found ";
    cin>> num;


    cout<<"element found at index "<<binarysr(a,size,num);
    return 0;
}

