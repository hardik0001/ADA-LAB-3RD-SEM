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
    for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
    }

    for(int c=0; c<=size; c++)
    {
        cout<<a[c]<<" ";
    }
    return 0;
}
