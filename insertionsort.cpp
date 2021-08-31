#include <iostream>
using namespace std;
int main()
{
    int a[50], size;
    int temp,i ,j;
    cout<< "enter the size of an array";
    cin>> size;
    cout<< "enter the element of array";
    for(int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    for(int k=1; k<size; k++)   
    {  
        int temp = a[k];  
        int j= k-1;  
        while(j>=0 && temp <= a[j])  
        {  
           a[j+1] = a[j];   
            j = j-1;  
        }  
        a[j+1] = temp;  
    }  
    cout<<"\nSorted list is \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<a[i]<<"\t";  
    }  
}
